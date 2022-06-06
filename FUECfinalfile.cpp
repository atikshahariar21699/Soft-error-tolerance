#include<bits/stdc++.h>
using namespace std;
#define it long long int
int main()
{
    it num,ttl=0,n0=0,n1=0,n2=0,n3=0,n4=0,n5=0,n6=0,n7=0,n8=0,iv=2,n9=0,n10=0,n11=0,n12=0,n13=0,n14=0,n15=0,n16=0;
    cout<<"Enter the num of error: "<<endl;
    cin>>num;
  ofstream myfile ("example.txt");
  if (myfile.is_open())
  {

    myfile <<num << " bit error \n";

  }
  else myfile << "Unable to open file";


for(it i0=0;i0<iv;i0++)
{
	for(it i1=0;i1<iv;i1++)
   {
	   for(it i2=0;i2<iv;i2++)
       {
	       for(it i3=0;i3<iv;i3++)
     	   {
	           for(it i4=0;i4<iv;i4++)
               {
	             for(it i5=0;i5<iv;i5++)
                 {
                    for(it i6=0;i6<iv;i6++)
                    {
	                    for(it i7=0;i7<iv;i7++)
                        {
	                         for(it i8=0;i8<iv;i8++)
                             {
	                             for(it i9=0;i9<iv;i9++)
                                 {
	                                  for(it i10=0;i10<iv;i10++)
                                      {
	                                       for(it i11=0;i11<iv;i11++)
     	                                   {
	                                             for(it i12=0;i12<iv;i12++)
                                                 {
	                                                 for(it i13=0;i13<iv;i13++)
                                                     {
                                                          for(it i14=0;i14<iv;i14++)
                                                          {
	                                                         for(it i15=0;i15<iv;i15++)
                                                             {


	it n=16, z=0;
    it ip1[16],ip2[16];




	ip1[0]=i0;ip1[1]=i1;
	ip1[2]=i2;ip1[3]=i3;
	ip1[4]=i4;ip1[5]=i5;
	ip1[6]=i6;ip1[7]=i7;
	ip1[8]=i8;ip1[9]=i9;
	ip1[10]=i10;ip1[11]=i11;
	ip1[12]=i12;ip1[13]=i13;
	ip1[14]=i14;ip1[15]=i15;




    //myfile<<" 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1"<<endl;
    ///myfile<<"Give input for errored data bit(16):"<<endl;
    int test=0;
    //int num;
    //myfile<<"Enter the num of error: "<<endl;
    //cin>>num;
    while(test<(16-num+1))   /// inject error
    {

		myfile<<endl<<"input for actual data bit(16):"<<endl;
	   for(it i=0;i<16;i++)
	  {
		myfile<<ip1[i];
	  }


        for(it i=0;i<16;i++)
		{
			if(i>=test&&i<(test+num))
			{
				if(ip1[i]==1)
				{
					ip2[i]=0;
				}
				else
				{
					ip2[i]=1;
				}
			}
			else
			{
				if(ip1[i]==1)
				{
					ip2[i]=1;
				}
				else
				{
					ip2[i]=0;
				}
			}
		}

        myfile<<endl;
        myfile<<"input for errored data bit(16):"<<endl;
        for(it i=0; i<16; i++)
        {

            myfile<<ip2[i];


        }
		ttl++;
		//myfile<<endl;




    it H15[21][37]={{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
					 {0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0},
					 {0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0},
					 {0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0},
					 {0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0},
					 {0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1},
					 {0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
					 {0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
					 {0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
					 {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0},
					 {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0},
					 {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0,   0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
					 {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0,   0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0,   0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0,   0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0,   0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0},
                     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0,   0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0},
                     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0,   1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1},
                     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0,   0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
                     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0,   0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
                     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,   0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}};

		it cm=0,tempcount=0, c15[21],s15[21], sum=0;




        // 16 bit error check bits using loop
        cm=0;
         for(it i=0;i<21;i++)
		 {
		   cm=0;
		 	for(it j=21;j<37;j++)
			{
				if(H15[i][j]==1)
				{
					cm=cm+ip1[j-21];
				}

			}
			c15[i]=cm%2;
		 }


        //syndrom calculation daec


        // 16 bit error check bits using loop
        cm=0;
         for(it i=0;i<21;i++)
		 {
		   cm=0;
		 	for(it j=21;j<37;j++)
			{
				if(H15[i][j]==1)
				{
					cm=cm+ip2[j-21];
				}

			}
			s15[i]=(c15[i]+cm)%2;
			sum=sum+s15[i];
		 }




		 //for(it i=0;i<13;i++)
		 //{
		 //	myfile<<s7[i]<<endl;
		 //}


        //myfile<<"syndrome:";


        it pos = 1000,flag=0,tmpcount=0,tmp15[21];



          if(sum==0)
            {
                myfile<<endl<<"no error found"<<endl;
            }
            else
            {
            if(flag==0)
            {


				for(it j=21;j<22;j++)
				{
					for(it i=0;i<21;i++)
					{
						tmp15[i]=(H15[i][j]+H15[i][j+1]+H15[i][j+2]+H15[i][j+3]+H15[i][j+4]+H15[i][j+5]+H15[i][j+6]+H15[i][j+7]
                        +H15[i][j+8]+H15[i][j+9]+H15[i][j+10]+H15[i][j+11]+H15[i][j+12]+H15[i][j+13]+H15[i][j+14]+H15[i][j+15])%2;

					}
					tmpcount=0;
                for(it i=0; i<21; i++)
                {
                    if(tmp15[i]==s15[i])
                    {
                        tmpcount++;
						//myfile<<"asa"<<endl;
                    }
                    else
                    {
                        tmpcount=0;
                        break;
                    }
                    if(tmpcount==21)
                    {
                        pos=j;
                        flag=1;
						n16++;
                        myfile<<endl<<"16bit error found at bit position  "<<pos-20<<" & "<<pos-19<<" & "<<pos-18<<" & "<<pos-17<<" & "<<pos-16<<" & "<<pos-15<<" & "<<pos-14<<" & "<<pos-13<<" & "<<pos-12<<" & "<<pos-11<<" & "<<pos-10<<" & "<<pos-9<<" & "<<pos-8<<" & "<<pos-7<<" & "<<pos-6<<" & "<<pos-5<<endl;
                        ip2[pos-21]=(ip2[pos-21]+1)%2;
                        ip2[pos-20]=(ip2[pos-20]+1)%2;
                        ip2[pos-19]=(ip2[pos-19]+1)%2;
                        ip2[pos-18]=(ip2[pos-18]+1)%2;
                        ip2[pos-17]=(ip2[pos-17]+1)%2;
                        ip2[pos-16]=(ip2[pos-16]+1)%2;
                        ip2[pos-15]=(ip2[pos-15]+1)%2;
                        ip2[pos-14]=(ip2[pos-14]+1)%2;
                        ip2[pos-13]=(ip2[pos-13]+1)%2;
					    ip2[pos-12]=(ip2[pos-12]+1)%2;
						ip2[pos-11]=(ip2[pos-11]+1)%2;
						ip2[pos-10]=(ip2[pos-10]+1)%2;
						ip2[pos-9]=(ip2[pos-9]+1)%2;
						ip2[pos-8]=(ip2[pos-8]+1)%2;
                        ip2[pos-7]=(ip2[pos-7]+1)%2;
                        ip2[pos-6]=(ip2[pos-6]+1)%2;
                        myfile<<"corrected output: ";
                        for(it k=0; k<16; k++)
                        {
                            myfile<<ip2[k]<<" ";
                        }
                        myfile<<endl;
                        break;
					}
                }


				}

            }
            if(flag==0)
            {


				for(it j=21;j<23;j++)
				{
					for(it i=0;i<21;i++)
					{
						tmp15[i]=(H15[i][j]+H15[i][j+1]+H15[i][j+2]+H15[i][j+3]+H15[i][j+4]+H15[i][j+5]+H15[i][j+6]+H15[i][j+7]+H15[i][j+8]+H15[i][j+9]+H15[i][j+10]+H15[i][j+11]+H15[i][j+12]+H15[i][j+13]+H15[i][j+14])%2;
					}
					tmpcount=0;
                for(it i=0; i<21; i++)
                {
                    if(tmp15[i]==s15[i])
                    {
                        tmpcount++;
						//myfile<<"asa"<<endl;
                    }
                    else
                    {
                        tmpcount=0;
                        break;
                    }
                    if(tmpcount==21)
                    {
                        pos=j;
                        flag=1;
						n15++;
                        myfile<<endl<<"15bit error found at bit position  "<<pos-20<<" & "<<pos-19<<" & "<<pos-18<<" & "<<pos-17<<" & "<<pos-16<<" & "<<pos-15<<" & "<<pos-14<<" & "<<pos-13<<" & "<<pos-12<<" & "<<pos-11<<" & "<<pos-10<<" & "<<pos-9<<" & "<<pos-8<<" & "<<pos-7<<" & "<<pos-6<<endl;
                        ip2[pos-21]=(ip2[pos-21]+1)%2;
                        ip2[pos-20]=(ip2[pos-20]+1)%2;
                        ip2[pos-19]=(ip2[pos-19]+1)%2;
                        ip2[pos-18]=(ip2[pos-18]+1)%2;
                        ip2[pos-17]=(ip2[pos-17]+1)%2;
                        ip2[pos-16]=(ip2[pos-16]+1)%2;
                        ip2[pos-15]=(ip2[pos-15]+1)%2;
                        ip2[pos-14]=(ip2[pos-14]+1)%2;
					    ip2[pos-13]=(ip2[pos-13]+1)%2;
						ip2[pos-12]=(ip2[pos-12]+1)%2;
						ip2[pos-11]=(ip2[pos-11]+1)%2;
						ip2[pos-10]=(ip2[pos-10]+1)%2;
						ip2[pos-9]=(ip2[pos-9]+1)%2;
                        ip2[pos-8]=(ip2[pos-8]+1)%2;
                        ip2[pos-7]=(ip2[pos-7]+1)%2;
                        myfile<<"corrected output: ";
                        for(it k=0; k<16; k++)
                        {
                            myfile<<ip2[k]<<" ";
                        }
                        myfile<<endl;
                        break;
					}
                }


				}

            }

           if(flag==0)
            {


				for(it j=21;j<24;j++)
				{
					for(it i=0;i<21;i++)
					{
						tmp15[i]=(H15[i][j]+H15[i][j+1]+H15[i][j+2]+H15[i][j+3]+H15[i][j+4]+H15[i][j+5]+H15[i][j+6]+H15[i][j+7]+H15[i][j+8]+H15[i][j+9]+H15[i][j+10]+H15[i][j+11]+H15[i][j+12]+H15[i][j+13])%2;
					}
					tmpcount=0;
                for(it i=0; i<21; i++)
                {
                    if(tmp15[i]==s15[i])
                    {
                        tmpcount++;
						//myfile<<"asa"<<endl;
                    }
                    else
                    {
                        tmpcount=0;
                        break;
                    }
                    if(tmpcount==21)
                    {
                        pos=j;
                        flag=1;
						n14++;
                        myfile<<endl<<"14bit error found at bit position  "<<pos-20<<" & "<<pos-19<<" & "<<pos-18<<" & "<<pos-17<<" & "<<pos-16<<" & "<<pos-15<<" & "<<pos-14<<" & "<<pos-13<<" & "<<pos-12<<" & "<<pos-11<<" & "<<pos-10<<" & "<<pos-9<<" & "<<pos-8<<" & "<<pos-7<<endl;
                        ip2[pos-21]=(ip2[pos-21]+1)%2;
                        ip2[pos-20]=(ip2[pos-20]+1)%2;
                        ip2[pos-19]=(ip2[pos-19]+1)%2;
                        ip2[pos-18]=(ip2[pos-18]+1)%2;
                        ip2[pos-17]=(ip2[pos-17]+1)%2;
                        ip2[pos-16]=(ip2[pos-16]+1)%2;
                        ip2[pos-15]=(ip2[pos-15]+1)%2;
                        ip2[pos-14]=(ip2[pos-14]+1)%2;
					    ip2[pos-13]=(ip2[pos-13]+1)%2;
						ip2[pos-12]=(ip2[pos-12]+1)%2;
						ip2[pos-11]=(ip2[pos-11]+1)%2;
						ip2[pos-10]=(ip2[pos-10]+1)%2;
						ip2[pos-9]=(ip2[pos-9]+1)%2;
                        ip2[pos-8]=(ip2[pos-8]+1)%2;
                        myfile<<"corrected output: ";
                        for(it k=0; k<16; k++)
                        {
                            myfile<<ip2[k]<<" ";
                        }
                        myfile<<endl;
                        break;
					}
                    }


				}

            }


           if(flag==0)
            {


				for(it j=21;j<25;j++)
				{
					for(it i=0;i<21;i++)
					{
						tmp15[i]=(H15[i][j]+H15[i][j+1]+H15[i][j+2]+H15[i][j+3]+H15[i][j+4]+H15[i][j+5]+H15[i][j+6]+H15[i][j+7]+H15[i][j+8]+H15[i][j+9]+H15[i][j+10]+H15[i][j+11]+H15[i][j+12])%2;
					}
					tmpcount=0;
                for(it i=0; i<21; i++)
                {
                    if(tmp15[i]==s15[i])
                    {
                        tmpcount++;

                    }
                    else
                    {
                        tmpcount=0;
                        break;
                    }
                    if(tmpcount==21)
                    {
                        pos=j;
                        flag=1;
						n13++;
                        myfile<<endl<<"13bit error found at bit position  "<<pos-20<<" & "<<pos-19<<" & "<<pos-18<<" & "<<pos-17<<" & "<<pos-16<<" & "<<pos-15<<" & "<<pos-14<<" & "<<pos-13<<" & "<<pos-12<<" & "<<pos-11<<" & "<<pos-10<<" & "<<pos-9<<" & "<<pos-8<<endl;
                        ip2[pos-21]=(ip2[pos-21]+1)%2;
                        ip2[pos-20]=(ip2[pos-20]+1)%2;
                        ip2[pos-19]=(ip2[pos-19]+1)%2;
                        ip2[pos-18]=(ip2[pos-18]+1)%2;
                        ip2[pos-17]=(ip2[pos-17]+1)%2;
                        ip2[pos-16]=(ip2[pos-16]+1)%2;
                        ip2[pos-15]=(ip2[pos-15]+1)%2;
                        ip2[pos-14]=(ip2[pos-14]+1)%2;
					    ip2[pos-13]=(ip2[pos-13]+1)%2;
						ip2[pos-12]=(ip2[pos-12]+1)%2;
						ip2[pos-11]=(ip2[pos-11]+1)%2;
						ip2[pos-10]=(ip2[pos-10]+1)%2;
						ip2[pos-9]=(ip2[pos-9]+1)%2;

                        myfile<<"corrected output: ";
                        for(it k=0; k<16; k++)
                        {
                            myfile<<ip2[k]<<" ";
                        }
                        myfile<<endl;
                        break;
					}
                    }


				}

            }

           if(flag==0)
            {


				for(it j=21;j<26;j++)
				{
					for(it i=0;i<21;i++)
					{
						tmp15[i]=(H15[i][j]+H15[i][j+1]+H15[i][j+2]+H15[i][j+3]+H15[i][j+4]+H15[i][j+5]+H15[i][j+6]+H15[i][j+7]+H15[i][j+8]+H15[i][j+9]+H15[i][j+10]+H15[i][j+11])%2;
					}
					tmpcount=0;
                for(it i=0; i<21; i++)
                {
                    if(tmp15[i]==s15[i])
                    {
                        tmpcount++;

                    }
                    else
                    {
                        tmpcount=0;
                        break;
                    }
                    if(tmpcount==21)
                    {
                        pos=j;
                        flag=1;
						n12++;
                        myfile<<endl<<"12bit error found at bit position  "<<pos-20<<" & "<<pos-19<<" & "<<pos-18<<" & "<<pos-17<<" & "<<pos-16<<" & "<<pos-15<<" & "<<pos-14<<" & "<<pos-13<<" & "<<pos-12<<" & "<<pos-11<<" & "<<pos-10<<" & "<<pos-9<<endl;
                        ip2[pos-21]=(ip2[pos-21]+1)%2;
                        ip2[pos-20]=(ip2[pos-20]+1)%2;
                        ip2[pos-19]=(ip2[pos-19]+1)%2;
                        ip2[pos-18]=(ip2[pos-18]+1)%2;
                        ip2[pos-17]=(ip2[pos-17]+1)%2;
                        ip2[pos-16]=(ip2[pos-16]+1)%2;
                        ip2[pos-15]=(ip2[pos-15]+1)%2;
                        ip2[pos-14]=(ip2[pos-14]+1)%2;
					    ip2[pos-13]=(ip2[pos-13]+1)%2;
						ip2[pos-12]=(ip2[pos-12]+1)%2;
						ip2[pos-11]=(ip2[pos-11]+1)%2;
						ip2[pos-10]=(ip2[pos-10]+1)%2;
                        myfile<<"corrected output: ";
                        for(it k=0; k<16; k++)
                        {
                            myfile<<ip2[k]<<" ";
                        }
                        myfile<<endl;
                        break;
					}
                    }


				}

            }

           if(flag==0)
            {


				for(it j=21;j<27;j++)
				{
					for(it i=0;i<21;i++)
					{
						tmp15[i]=(H15[i][j]+H15[i][j+1]+H15[i][j+2]+H15[i][j+3]+H15[i][j+4]+H15[i][j+5]+H15[i][j+6]+H15[i][j+7]+H15[i][j+8]+H15[i][j+9]+H15[i][j+10])%2;
					}
					tmpcount=0;
                for(it i=0; i<21; i++)
                {
                    if(tmp15[i]==s15[i])
                    {
                        tmpcount++;

                    }
                    else
                    {
                        tmpcount=0;
                        break;
                    }
                    if(tmpcount==21)
                    {
                        pos=j;
                        flag=1;
						n11++;
                        myfile<<endl<<"11bit error found at bit position  "<<pos-20<<" & "<<pos-19<<" & "<<pos-18<<" & "<<pos-17<<" & "<<pos-16<<" & "<<pos-15<<" & "<<pos-14<<" & "<<pos-13<<" & "<<pos-12<<" & "<<pos-11<<" & "<<pos-10<<endl;
                        ip2[pos-21]=(ip2[pos-21]+1)%2;
                        ip2[pos-20]=(ip2[pos-20]+1)%2;
                        ip2[pos-19]=(ip2[pos-19]+1)%2;
                        ip2[pos-18]=(ip2[pos-18]+1)%2;
                        ip2[pos-17]=(ip2[pos-17]+1)%2;
                        ip2[pos-16]=(ip2[pos-16]+1)%2;
                        ip2[pos-15]=(ip2[pos-15]+1)%2;
                        ip2[pos-14]=(ip2[pos-14]+1)%2;
					    ip2[pos-13]=(ip2[pos-13]+1)%2;
						ip2[pos-12]=(ip2[pos-12]+1)%2;
						ip2[pos-11]=(ip2[pos-11]+1)%2;
                        myfile<<"corrected output: ";
                        for(it k=0; k<16; k++)
                        {
                            myfile<<ip2[k]<<" ";
                        }
                        myfile<<endl;
                        break;
					}
                    }


				}

            }



           if(flag==0)
            {


				for(it j=21;j<28;j++)
				{
					for(it i=0;i<21;i++)
					{
						tmp15[i]=(H15[i][j]+H15[i][j+1]+H15[i][j+2]+H15[i][j+3]+H15[i][j+4]+H15[i][j+5]+H15[i][j+6]+H15[i][j+7]+H15[i][j+8]+H15[i][j+9])%2;
					}
					tmpcount=0;
                for(it i=0; i<21; i++)
                {
                    if(tmp15[i]==s15[i])
                    {
                        tmpcount++;

                    }
                    else
                    {
                        tmpcount=0;
                        break;
                    }
                    if(tmpcount==21)
                    {
                        pos=j;
                        flag=1;
						n10++;
                        myfile<<endl<<"10bit error found at bit position  "<<pos-20<<" & "<<pos-19<<" & "<<pos-18<<" & "<<pos-17<<" & "<<pos-16<<" & "<<pos-15<<" & "<<pos-14<<" & "<<pos-13<<" & "<<pos-12<<" & "<<pos-11<<endl;
                        ip2[pos-21]=(ip2[pos-21]+1)%2;
                        ip2[pos-20]=(ip2[pos-20]+1)%2;
                        ip2[pos-19]=(ip2[pos-19]+1)%2;
                        ip2[pos-18]=(ip2[pos-18]+1)%2;
                        ip2[pos-17]=(ip2[pos-17]+1)%2;
                        ip2[pos-16]=(ip2[pos-16]+1)%2;
                        ip2[pos-15]=(ip2[pos-15]+1)%2;
                        ip2[pos-14]=(ip2[pos-14]+1)%2;
					    ip2[pos-13]=(ip2[pos-13]+1)%2;
						ip2[pos-12]=(ip2[pos-12]+1)%2;

                        myfile<<"corrected output: ";
                        for(it k=0; k<16; k++)
                        {
                            myfile<<ip2[k]<<" ";
                        }
                        myfile<<endl;
                        break;
					}
                    }


				}

            }

          if(flag==0)
            {


				for(it j=21;j<29;j++)
				{
					for(it i=0;i<21;i++)
					{
						tmp15[i]=(H15[i][j]+H15[i][j+1]+H15[i][j+2]+H15[i][j+3]+H15[i][j+4]+H15[i][j+5]+H15[i][j+6]+H15[i][j+7]+H15[i][j+8])%2;
					}
					tmpcount=0;
                for(it i=0; i<21; i++)
                {
                    if(tmp15[i]==s15[i])
                    {
                        tmpcount++;

                    }
                    else
                    {
                        tmpcount=0;
                        break;
                    }
                    if(tmpcount==21)
                    {
                        pos=j;
                        flag=1;
						n9++;
                        myfile<<endl<<"9bit error found at bit position  "<<pos-20<<" & "<<pos-19<<" & "<<pos-18<<" & "<<pos-17<<" & "<<pos-16<<" & "<<pos-15<<" & "<<pos-14<<" & "<<pos-13<<" & "<<pos-12<<endl;
                        ip2[pos-21]=(ip2[pos-21]+1)%2;
                        ip2[pos-20]=(ip2[pos-20]+1)%2;
                        ip2[pos-19]=(ip2[pos-19]+1)%2;
                        ip2[pos-18]=(ip2[pos-18]+1)%2;
                        ip2[pos-17]=(ip2[pos-17]+1)%2;
                        ip2[pos-16]=(ip2[pos-16]+1)%2;
                        ip2[pos-15]=(ip2[pos-15]+1)%2;
                        ip2[pos-14]=(ip2[pos-14]+1)%2;
					    ip2[pos-13]=(ip2[pos-13]+1)%2;
                        myfile<<"corrected output: ";
                        for(it k=0; k<16; k++)
                        {
                            myfile<<ip2[k]<<" ";
                        }
                        myfile<<endl;
                        break;
					}
                    }


				}

            }

            if(flag==0)
            {
				for(it j=21;j<30;j++)
				{
					for(it i=0;i<21;i++)
					{
						tmp15[i]=(H15[i][j]+H15[i][j+1]+H15[i][j+2]+H15[i][j+3]+H15[i][j+4]+H15[i][j+5]+H15[i][j+6]+H15[i][j+7])%2;
					}
					tmpcount=0;
                for(it i=0; i<21; i++)
                {
                    if(tmp15[i]==s15[i])
                    {
                        tmpcount++;

                    }
                    else
                    {
                        tmpcount=0;
                        break;
                    }
                    if(tmpcount==21)
                    {
                        pos=j;
                        flag=1;
						n8++;
                        myfile<<endl<<"8bit error found at bit position  "<<pos-20<<" & "<<pos-19<<" & "<<pos-18<<" & "<<pos-17<<" & "<<pos-16<<" & "<<pos-15<<" & "<<pos-14<<" & "<<pos-13<<endl;
                        ip2[pos-21]=(ip2[pos-21]+1)%2;
                        ip2[pos-20]=(ip2[pos-20]+1)%2;
                        ip2[pos-19]=(ip2[pos-19]+1)%2;
                        ip2[pos-18]=(ip2[pos-18]+1)%2;
                        ip2[pos-17]=(ip2[pos-17]+1)%2;
                        ip2[pos-16]=(ip2[pos-16]+1)%2;
                        ip2[pos-15]=(ip2[pos-15]+1)%2;
                        ip2[pos-14]=(ip2[pos-14]+1)%2;
                        myfile<<"corrected output: ";
                        for(it k=0; k<16; k++)
                        {
                            myfile<<ip2[k]<<" ";
                        }
                        myfile<<endl;
                        break;
					}
                    }


				}

            }
           if(flag==0)
            {
				for(it j=21;j<31;j++)
				{
					for(it i=0;i<21;i++)
					{
						tmp15[i]=(H15[i][j] + H15[i][j+1] + H15[i][j+2] + H15[i][j+3] + H15[i][j+4] + H15[i][j+5] + H15[i][j+6])%2;
					}
					tmpcount=0;
                for(it i=0; i<21; i++)
                {
                    if(tmp15[i]==s15[i])
                    {
                        tmpcount++;

                    }
                    else
                    {
                        tmpcount=0;
                        break;
                    }
                    if(tmpcount==21)
                    {
                        pos=j;
                        flag=1;
						n7++;
                        myfile<<endl<<"7bit error found at bit position  "<<pos-20<<" & "<<pos-19<<" & "<<pos-18<<" & "<<pos-17<<" & "<<pos-16<<" & "<<pos-15<<" & "<<pos-14<<endl;
                        ip2[pos-21]=(ip2[pos-21]+1)%2;
                        ip2[pos-20]=(ip2[pos-20]+1)%2;
                        ip2[pos-19]=(ip2[pos-19]+1)%2;
                        ip2[pos-18]=(ip2[pos-18]+1)%2;
                        ip2[pos-17]=(ip2[pos-17]+1)%2;
                        ip2[pos-16]=(ip2[pos-16]+1)%2;
                        ip2[pos-15]=(ip2[pos-15]+1)%2;
                        myfile<<"corrected output: ";
                        for(it k=0; k<16; k++)
                        {
                            myfile<<ip2[k]<<" ";
                        }
                        myfile<<endl;
                        break;
					}
                    }


				}

            }

            if(flag==0)
            {
				for(it j=21;j<32;j++)
				{
					for(it i=0;i<21;i++)
					{
						tmp15[i]=(H15[i][j] + H15[i][j+1] + H15[i][j+2] + H15[i][j+3] + H15[i][j+4] + H15[i][j+5] )%2;
					}
					tmpcount=0;
                for(it i=0; i<21; i++)
                {
                    if(tmp15[i]==s15[i])
                    {
                        tmpcount++;

                    }
                    else
                    {
                        tmpcount=0;
                        break;
                    }
                    if(tmpcount==21)
                    {
                        pos=j;
                        flag=1;
						n6++;
                        myfile<<endl<<"6bit error found at bit position  "<<pos-20<<" & "<<pos-19<<" & "<<pos-18<<" & "<<pos-17<<" & "<<pos-16<<" & "<<pos-15<<endl;
                        ip2[pos-21]=(ip2[pos-21]+1)%2;
                        ip2[pos-20]=(ip2[pos-20]+1)%2;
                        ip2[pos-19]=(ip2[pos-19]+1)%2;
                        ip2[pos-18]=(ip2[pos-18]+1)%2;
                        ip2[pos-17]=(ip2[pos-17]+1)%2;
                        ip2[pos-16]=(ip2[pos-16]+1)%2;
                        myfile<<"corrected output: ";
                        for(it k=0; k<16; k++)
                        {
                            myfile<<ip2[k]<<" ";
                        }
                        myfile<<endl;
                        break;
					}
                    }


				}

            }

           if(flag==0)
            {
				for(it j=21;j<33;j++)
				{
					for(it i=0;i<21;i++)
					{
						tmp15[i]=(H15[i][j] + H15[i][j+1] + H15[i][j+2] + H15[i][j+3] + H15[i][j+4])%2;
					}
					tmpcount=0;
                for(it i=0; i<21; i++)
                {
                    if(tmp15[i]==s15[i])
                    {
                        tmpcount++;

                    }
                    else
                    {
                        tmpcount=0;
                        break;
                    }
                    if(tmpcount==21)
                    {
                        pos=j;
                        flag=1;
						n5++;
                        myfile<<endl<<"5bit error found at bit position  "<<pos-20<<" & "<<pos-19<<" & "<<pos-18<<" & "<<pos-17<<" & "<<pos-16<<endl;
                        ip2[pos-21]=(ip2[pos-21]+1)%2;
                        ip2[pos-20]=(ip2[pos-20]+1)%2;
                        ip2[pos-19]=(ip2[pos-19]+1)%2;
                        ip2[pos-18]=(ip2[pos-18]+1)%2;
                        ip2[pos-17]=(ip2[pos-17]+1)%2;
                        myfile<<"corrected output: ";
                        for(it k=0; k<16; k++)
                        {
                            myfile<<ip2[k]<<" ";
                        }
                        myfile<<endl;
                        break;
					}
                    }


				}

            }

           if(flag==0)
            {
				for(it j=21;j<34;j++)
				{
					for(it i=0;i<21;i++)
					{
						tmp15[i]=(H15[i][j] + H15[i][j+1] + H15[i][j+2] + H15[i][j+3] )%2;
					}
					tmpcount=0;
                for(it i=0; i<21; i++)
                {
                    if(tmp15[i]==s15[i])
                    {
                        tmpcount++;

                    }
                    else
                    {
                        tmpcount=0;
                        break;
                    }
                    if(tmpcount==21)
                    {
                        pos=j;
                        flag=1;
						n4++;
                        myfile<<endl<<"4bit error found at bit position  "<<pos-20<<" & "<<pos-19<<" & "<<pos-18<<" & "<<pos-17<<endl;
                        ip2[pos-21]=(ip2[pos-21]+1)%2;
                        ip2[pos-20]=(ip2[pos-20]+1)%2;
                        ip2[pos-19]=(ip2[pos-19]+1)%2;
                        ip2[pos-18]=(ip2[pos-18]+1)%2;
                        myfile<<"corrected output: ";
                        for(it k=0; k<16; k++)
                        {
                            myfile<<ip2[k]<<" ";
                        }
                        myfile<<endl;
                        break;
					}
                    }


				}

            }

           if(flag==0)
            {
				for(it j=21;j<35;j++)
				{
					for(it i=0;i<21;i++)
					{
						tmp15[i]=(H15[i][j] + H15[i][j+1] + H15[i][j+2])%2;
					}
					tmpcount=0;
                for(it i=0; i<21; i++)
                {
                    if(tmp15[i]==s15[i])
                    {
                        tmpcount++;

                    }
                    else
                    {
                        tmpcount=0;
                        break;
                    }
                    if(tmpcount==21)
                    {
                        pos=j;
                        flag=1;
						n3++;
                        myfile<<endl<<"3bit error found at bit position  "<<pos-20<<" & "<<pos-19<<" & "<<pos-18<<endl;
                        ip2[pos-21]=(ip2[pos-21]+1)%2;
                        ip2[pos-20]=(ip2[pos-20]+1)%2;
                        ip2[pos-19]=(ip2[pos-19]+1)%2;
                        myfile<<"corrected output: ";
                        for(it k=0; k<16; k++)
                        {
                            myfile<<ip2[k]<<" ";
                        }
                        myfile<<endl;
                        break;
					}
                    }


				}

            }
           if(flag==0)
            {
				for(it j=21;j<36;j++)
				{
					for(it i=0;i<21;i++)
					{
						tmp15[i]=(H15[i][j] + H15[i][j+1] )%2;
					}
					tmpcount=0;
                for(it i=0; i<21; i++)
                {
                    if(tmp15[i]==s15[i])
                    {
                        tmpcount++;

                    }
                    else
                    {
                        tmpcount=0;
                        break;
                    }
                    if(tmpcount==21)
                    {
                        pos=j;
                        flag=1;
						n2++;
                        myfile<<endl<<"2bit error found at bit position  "<<pos-20<<" & "<<pos-19<<endl;
                        ip2[pos-21]=(ip2[pos-21]+1)%2;
                        ip2[pos-20]=(ip2[pos-20]+1)%2;
                        myfile<<"corrected output: ";
                        for(it k=0; k<16; k++)
                        {
                            myfile<<ip2[k]<<" ";
                        }
                        myfile<<endl;
                        break;
					}
                    }


				}

            }

           if(flag==0)
            {
				for(it j=21;j<37;j++)
				{
					for(it i=0;i<21;i++)
					{
						tmp15[i]=(H15[i][j]);
					}
					tmpcount=0;
                for(it i=0; i<21; i++)
                {
                    if(tmp15[i]==s15[i])
                    {
                        tmpcount++;

                    }
                    else
                    {
                        tmpcount=0;
                        break;
                    }
                    if(tmpcount==21)
                    {
                        pos=j;
                        flag=1;
						n1++;
                        myfile<<endl<<"1bit error found at bit position  "<<pos-20<<endl;
                        ip2[pos-21]=(ip2[pos-21]+1)%2;
                        myfile<<"corrected output: ";
                        for(it k=0; k<16; k++)
                        {
                            myfile<<ip2[k]<<" ";
                        }
                        myfile<<endl;
                        break;
					}
                    }


				}

            }

            }



		test++;
		if(num==0)
		break;


    }

                                                             }
                                                           }
                                                      }
                                                   }
		                                      }
                                         }
                                    }
                               }
                           }
                       }
                  }
               }
		   }
       }
   }
}
double dd=0;
if(num==0)
{
	dd=((n0*100)/ttl);
}
else if(num==1)
{
	dd=((n1*100)/ttl);
}
else if(num==2)
{
	dd=((n2*100)/ttl);
}
else if(num==3)
{
	dd=((n3*100)/ttl);
}
else if(num==4)
{
	dd=((n4*100)/ttl);
}
else if(num==5)
{
	dd=((n5*100)/ttl);
}
else if(num==6)
{
	dd=((n6*100)/ttl);
}
else if(num==7)
{
	dd=((n7*100)/ttl);
}
else if(num==8)
{
	dd=((n8*100)/ttl);
}
else if(num==9)
{
	dd=((n9*100)/ttl);
}
else if(num==10)
{
	dd=((n10*100)/ttl);
}
else if(num==11)
{
	dd=((n11*100)/ttl);
}
else if(num==12)
{
	dd=((n12*100)/ttl);
}
else if(num==13)
{
	dd=((n13*100)/ttl);
}
else if(num==14)
{
	dd=((n14*100)/ttl);
}
else if(num==15)
{
	dd=((n15*100)/ttl);
}
else if(num==16)
{
	dd=((n16*100)/ttl);
}
myfile<<"total tests:"<<ttl<<endl;
myfile<<"accuracy: "<<dd<<"%"<<endl;
myfile.close();

}
