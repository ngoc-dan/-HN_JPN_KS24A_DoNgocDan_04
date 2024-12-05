#include<stdio.h>
int main(){
	int choice,n=0;
	int arr[100];
	do{
	
    printf("\n MENU \n ");
        
		printf("1. Nhap so phan tu can nhap trong  mang \n ");      
		printf("2. In gia tri cac phan tu cua mang theo ma tran \n ");
		printf("3. demso luong so hoan hao trong mang \n");
		printf("4. tim gia tri lon thu 2 trong mang \n");
		printf("5. them mot phan tu vao vi tri ngau nhien trong mang \n");
		printf("6. xoa phan tu tai mot vi tri cu the \n");
		printf("7. sap sep phan tu theo thu tu tang dan \n");
		printf("8. nhap pt xem phan tu co ton tai trong mang hay khong \n");
		printf("9. sap sep mang va hien thi toan bo pt trong mang co so chan dung truoc so le \n");
		printf("10. dao nguoc thu tu phan tu co trong mang \n");
		printf("11. thoat khoi chuong trinh \n");
		
		printf("moi nguoi dung nhap lua chon : ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("moi nhap o phan tu cua mang : ");
				scanf("%d",&n);
				if(n>0){
				    for(int i=0;i<n;i++){
				    	printf("arr[%d] = ",i+1);
				    	scanf("%d",&arr[i]);
					}
				}else{
					printf("phan tu khong hop le");
					n=0;
				}
				printf("\n");
				break;
			case 2:
			    if(n==0){
			    	printf("phan tu trong mang chua duoc nhap\n");
			    	break;
				}else{
				printf(" cac phan tu trong mang la \n");
				for(int i=0;i<n;i++){
					printf("arr[%d] = %d\n",i,arr[i]);
				}
				printf("\n");
				break;
			}
			case 3:
				if(n==0){
			    	printf("phan tu trong mang chua duoc nhap\n");
			    	break;
				}else{
				int u=0;
			    int sum=0;
			    for(int i=0;i<n;i++){
			    	for(int j=1;j<arr[i];j++){
			    		if(arr[i]%j==0){
			    			u=u+j;
						}
					}
					if(u==arr[i]){
						sum++;
					}
					int u=0;
				}
				printf("so luong so hoan hao trong mang la : %d",sum);
				printf("\n");
				break;	
			}
			case 4:
				if(n==0){
			    printf("phan tu trong mang chua duoc nhap\n");
			    break;
				}else{
				int max=arr[0];
				int m=0;
				for(int i=0;i<n;i++){
					if(max<arr[i]){
						max=arr[i];
					}
				}
				for(int i=0;i<n;i++){
					if(m<arr[i] && arr[i]<max){
						m=arr[i];
					}
				}
				printf("so lon thu 2 trong mang la : %d",m);
				printf("\n");
				break;
			}
			case 5:
				if(n==0){
			    printf("phan tu trong mang chua duoc nhap\n");
			    break;
				}else{
					int giatri,vitri,temp;
					printf("nhap gt can them vao : ");
					scanf("%d",&giatri);
					printf("nhap vi tri can them vao : ");
					scanf("%d",&vitri);
					for(int i=0;i<n;i++){
						if(vitri<0||vitri>n){
							printf("vi tri khong hop le\n");
							continue;
						}
						for(i=n;i>vitri;i--){
							arr[i]=arr[i-1];							
						}
						arr[i]=arr[i-1];
						n++;
					}
					for(int i=0;i<n;i++){
						printf("%d ",arr[i]);
					}
					printf("\n");
				    break;
					}
			case 7:
				if(n==0){
			    printf("phan tu trong mang chua duoc nhap\n");
			    break;
				}else{
					for(int i=0;i<n;i++){
						int bien=arr[i];
						int j=j+i;
						while(j>=0&&arr[j]>=bien){
							arr[j+1]=arr[j];
							j=j-1;
						}
						arr[j+1]=bien;
					}
					printf("thu tu tang dan la \n");
					for(int i=0;i<n;i++){
						printf("%d ",arr[i]);
					}
					break;
				}
			case 10:
				if(n==0){
			    printf("phan tu trong mang chua duoc nhap\n");
			    break;
				}else{
				printf("dao nguoc thu tu cac pt trong mang la\n");
				for(int i=n-1;i>=0;i--){
					printf("%d ",arr[i]);
				}
				printf("\n");
				break;
			    }
		}
	}while(choice!=11);
	return 0;
}
