#include <iostream>
 using namespace std;
 void MoMoUser()  {
int MoMonum1,MoMonum2;

                do {
                cout << " Enter mobile number: "<< endl;
                cin >> MoMonum1;
                system("cls");

                cout << " Confirm number: "<< endl;
                cin >> MoMonum2;
                system("cls");

                if (MoMonum1== MoMonum2) {
                cout << " This service has not be Activated for Use here ";
                                       }    else { cout << "Invalid Number! "<< endl;}
                  }while(MoMonum1 != MoMonum2);
                  }
 void NonMoMoUser(){
              int secreteCode1,secreteCode2;
              float Amount;
              string NonMomoname;
              cout << " Enter Receiver Name: "<< endl;
              cin >> NonMomoname;
              system("cls");
              cout << " Enter Amount: "<< endl;
              cin >> Amount;
              system("cls");
              cout << " Enter Secrete Code: "<< endl;
              cin >> secreteCode1;
              system("cls");
              cout << " Confirm Secrete Code: "<< endl;
              cin >> secreteCode2;
              system("cls");
              if (secreteCode1 == secreteCode2) {
              cout << " Transaction Complete! ";
                                                } else { cout << " Transaction Failed!   " << endl;
                                                    cout << " Please Try Again "<< endl;
                                                        }
                 }
void SWC(){
        cout << " Send with Care "<< endl;
        cout << "  1) Mobile User   "<< endl;
        cout << "  2) MyCaretaker "<< endl;
        cout << "  3) AYO Send with Care Balances or Claim "<< endl;
        cout << "  0) Back "<< endl;
          }
void swcOP (){
        int sWc;
        cout << "1: Balances   "<< endl;
        cout << "2: MyCaretaker "<< endl;
        cout << "3: what is Send with Care? "<< endl;
        cout << "4: Claim "<< endl;
        cout << "0: Exit "<< endl;
        cin >> sWc;
        system("cls");
        if(sWc == 0) { cout << " Thank You! ";}
             }
void sendWithCare(){
         int swc;
         SWC();
         cin >> swc;
         system("cls");
         switch(swc){
     case 0:
        // TransferMoney();
     break;
     case 1:
           int MobNum;
         cout << "Please enter recipient's mobile number: ";
         cin  >> MobNum;
         system("cls");
         cout << "This Feature has not been Activated Yet for use ";
     break;
     case 2:
         cout << "This feature is temporarily unavailable "<< endl;
     break;
     case 3:
         swcOP();
                    }
                    }
void Favorite(){
             int fav;
           cout << " Favorite "<< endl;
           cout << "  1) Name "<< endl;
           cout << "  2) Find "<< endl;
           cout << "  3) Back "<< endl;
           cout << "          "<<endl;
           cin >> fav;
           system("cls");
           switch(fav){
          case 1:
             cout << " Sorry, System not available ";
          break;
          case 2:
             cout << " system service not available ";
          break;
          case 3:
         //    TransferMoney();
          break;
                      }
               }
void OtherNetworks(){
            int EntMObNum;
            cout << " Transfer Money to Other Networks "<< endl;
            cout << "  1) AirtelTigo "<< endl;
            cout << "  2) Vodafone "<< endl;
            cout << "  3) E-zwitch "<< endl;
            cout << "  4) G-Money "<< endl;
            cout << "  5) Zeepay "<< endl;
            cout << "  6) GhanaPay "<< endl;
            cout << "  0) Back"<< endl;
            cin >> EntMObNum;
            system("cls");
                 switch(EntMObNum){
                 break;
                 case 1:
                    cout << " Enter mobile number ";
                 break;
                 case 2:
                    cout << " Enter mobile number ";
                 break;
                 case 3:
                     cout << " Enter mobile number ";
                 break;
                 case 4:
                      cout << " Enter mobile number ";
                 break;
                 case 5:
                      cout << " Enter mobile number ";
                 break;
                 case 6:
                       cout << " Enter mobile number ";
                 break;
                 case 0:
                  //  TransferMoney();
                 break;
                 default:
                    cout<< " Invalid Choice ";
                                }
                    }
void Accounts(){
                 int aCC;
                 char harsh='#';
                  cout << " Please select the Bank "<< endl;
                  cout << " 1) STANCAHRT "<< endl;
                  cout << " 2) ABSA "<< endl;
                  cout << " 3) GCB "<< endl;
                  cout << " 4) FIDELITY "<< endl;
                  cout << " 5) ADB "<< endl;
                  cout << " 6) UMB "<< endl;
                  cout << " 7) REPUBLIC "<< endl;
                  cout << " 8) ZENITH "<< endl;
                  cout << " 9) ECOBANK "<< endl;
                  cout << " 10) CAL "<< endl;
                  cout << " 11) PRUDENTIAL "<< endl;
                 cout << "  # for next: "<<endl;
                  do {
                  cin  >> harsh;
                  system("cls");

                 if (harsh=='#') {
                  cout << " 12) STANBIC "<< endl;
                  cout << " 13) GT "<< endl;
                  cout << " 14) UBA "<< endl;
                  cout << " 15) ACCESS "<< endl;
                  cout << " 16) CBG "<< endl;
                  cout << " 17) FIRST NAT.BANK "<< endl;
                  cout << " 18) NIB "<< endl;
                  cout << " 19) BANK OF AFRICA "<< endl;
                  cout << " 20) BSIC "<< endl;
                  cout << " 21) SERVICES INTEGRITY "<< endl;
                   cout << " Enter # for next: "<<endl;
                                 }else { cout<< " Please Select # "<<endl; }
                     }while(harsh !='#');
                  do {
                  cin  >> harsh;
                  system("cls");

                  if (harsh =='#'){
                  cout << " 22) ARB Apex Bank  "<< endl;
                  cout << " 23) GHL "<< endl;
                  cout << " 24) SOCIETE GENERALE GHANA "<< endl;
                  cout << " 25) Sinapi Aba Savings and Loans "<< endl;
                  cout << " 26) Opportunity International Savings and Loans "<< endl;
                  cout << " Enter # for next: "<<endl;
                                   } else { cout<< " Please Select # "<<endl; }
                     }while(harsh !='#');
                  do {
                  cin  >> harsh;
                  system("cls");
                   if (harsh =='#'){
                  cout << " 27) ADEHYEMAN Savings and Loans "<< endl;
                                   }else { cout<< " Please Select # "<<endl; }
                     }while(harsh !='#');
                cin>> aCC;
                system("cls");
                cout << " Service is currently unavailable (Exit Application Down),please try after some time. ";
               }
void BankAccount(){
            int Acc;
            cout << " GHIPSS Banks transfer service "<< endl;
            cout << "  1) wallet to Bank Account "<< endl;
            cout << "  0) Back "<< endl;
            cin >> Acc;
            system("cls");
                   switch(Acc){
              case 1:
                 Accounts();
               break;
               case 0:
//                 TransferMoney();
               break;

               default:
                cout << "  Invalid Input! Try Again";
               break;
                              }
                  }
void menu() {
    int MenuNum;
  cout << " Menu "<< endl;
    cout << "  1) Transfer Money "<< endl;
    cout << "  2) MoMoPay & Pay Bill "<< endl;
    cout << "  3) Airtime & Bundles "<< endl;
    cout << "  4) Allow Cash Out "<< endl;
    cout << "  5) Financial Services "<< endl;
    cout << "  6) My Wallet "<< endl;
    cout << "  7) MoMo Promo "<< endl;
    cout << "                             " << endl;
  cout << "                             " << endl;
  cout << "                             " << endl;
  cout << " Choose an Option: ";
 cin  >> MenuNum;
 system("cls");
                    }

void TransferMoney()  {
int MenuNum;
    cout << " Transfer Money " << endl;
    cout << "  1) MoMo User "<< endl;
    cout << "  2) NOn MoMo User "<< endl;
    cout << "  3) Send With Care "<< endl;
    cout << "  4) Favorite "<< endl;
    cout << "  5) Other Networks "<< endl;
    cout << "  6) Bank Account "<< endl;
    cout << "  0) Back "<< endl;
    cout << " Enter an option:  "<<endl;
     cin >> MenuNum;
     system("cls");
     switch(MenuNum) {
 case 1:
    MoMoUser();
  break;
 case 2:
     NonMoMoUser();
  break;
 case 3:
     sendWithCare();
   break;
 case 4:
     Favorite();
   break;
 case 5:
     OtherNetworks();
   break;
 case 6:
     BankAccount();
   break;
 case 0:
     menu();
    break;
    default:
      cout << "  Invalid Choice! ";
  break;

                   }
                     }
void moMoPayPayBill()  {
            int MenuNum;
    cout << " MoMoPay & Pay Bill "<< endl;
    cout << "  1) MoMoPay "<< endl;
    cout << "  2) PayBill "<< endl;
    cout << "  3) GhQR "<< endl;
    cout << "  4) Back "<< endl;
            cin >> MenuNum;
            system("cls");
                      }
void PayBill(){   int paybill;
                  cout << " Pay Bill "<< endl;
                  cout << " 1) utilities "<< endl;
                  cout << " 2) TV & Entertainment "<< endl;
                  cout << " 3) School fees "<< endl;
                  cout << " 4) MTN Bills "<< endl;
                  cout << " 5) General payment "<< endl;
                  cout << " 6) EVD "<< endl;
                  cout << " 0) Back "<< endl;
                  cin >> paybill;
                  system("cls");
                   switch(paybill){
                    case 0:
                       moMoPayPayBill();
                    break;
                      case 1:
                  cout << " Utilities "<< endl;
                  cout << " 1) ECG "<< endl;
                  cout << " 2) Ghana Water "<< endl;
                  cout << " 0) Back "<< endl;
                      break;
                      case 2:
                  cout << " TV & Entertainment "<< endl;
                  cout << " 1) DStv/GOtv "<< endl;
                  cout << " 2) Startimes "<< endl;
                  cout << " 3) GCNET Payment "<< endl;
                  cout << " 0) Back "<< endl;
                      break;
                      case 3:
                 cout << " School Fees Payment Service "<< endl;
                  cout << " Select an option "<< endl;
                  cout << " 1) Search for school "<< endl;
                      break;
                      case 4:
                  cout << " MTN Billa "<< endl;
                  cout << " 1) MTN Post Paid "<< endl;
                  cout << " 0) Back "<< endl;
                      break;
                      case 5:
                          int pcode;
                          cout << " Enter Payment Code ";
                          cin >> pcode;
                          system("cls");
                      break;
                      case 6:
                  cout << " EVD Stock Purchase "<< endl;
                  cout << " 1) Others "<< endl;
                  cout << " 2) Self "<< endl;
                      break;
                                  }
              }

void MoMoPayPayBill()  {
            int MenuNum;
    cout << " MoMoPay & Pay Bill "<< endl;
    cout << "  1) MoMoPay "<< endl;
    cout << "  2) PayBill "<< endl;
    cout << "  3) GhQR "<< endl;
    cout << "  4) Back "<< endl;
            cin >> MenuNum;
            system("cls");
            string referenceId;
            switch(MenuNum){
            case 4:
                menu();
            case 1:
                cout << " Enter Merchant id/Payment Reference: ";
                cin >> referenceId;
                system("cls");
                cout << " System not Activated ";
            break;
            case 2:
                PayBill();
            break;
            case 3:
                float amt;
                cout << " Enter Amount: ";
                cin >> amt;
                system("cls");
                cout<< " Service Down currently, Try Again Later ";
            break;

                           }
                               }

 void airtimeBundles()  {
            int Option;
    cout << " Airtime & Bundles "<< endl;
    cout << "  1) Airtime "<< endl;
    cout << "  2) Internet Bundles "<< endl;
    cout << "  3) Fixed Broadband "<< endl;
    cout << "  4) Scheduled Airtime "<< endl;
    cout << "  5) Just4U "<< endl;
    cout << "  0) Back "<< endl;
    cin>>Option;
    system("cls");
             switch(Option){
             case 0:
                menu();
             break;
                            }
                       }


void InternetBundles(){
    int Bundle;
    cout << " Welcome to the Bundle Portal. Please select an option "<< endl;
    cout << "  1) Proceed to buy (No 4G bonus) "<< endl;
    cout << " 99) More "<< endl;
    cin>> Bundle;
    system("cls");
    switch(Bundle){
              case 99:
//                 PortalMore();
              break;
              case 1:
             //    BundlePortal();
              break;
                  }
                   }

void paymentMode(){
                int op;
                cout << " choose payment mode "<<endl;
                cout << " 1. Airtime "<<endl;
                cout << " 2. Mobile Money "<<endl;
                cin>> op;
                system("cls");
                  switch(op){
                    case 1:
                            cout<< " Your Airtime balance is insufficient to buy this bundle press 1 to pay with Mobile Money "<<endl;
                            cout<< " 1. Mobile Money "<<endl;
                            cout<< " 0. Cancel "<<endl;
                            cin>>op;
                            system("cls");
                            if (op == 1){ int pin;
                                    cout << " Authorize payment from your account to MTNBUNDLE for Internet Bundle Service."<<endl;
                                    cout << " Enter MM PIN to continue: ";
                                    cin>>pin;
                                    system("cls");
                                    int App;
                                    cout << " Do you want to approve the transaction "<<endl;
                                    cout << " 1) Yes "<<endl;
                                    cout << " 2) No "<<endl;
                                    cin>> App;
                                    system("cls");
                                           switch (App) {
                                                    case 1:
                                                        cout << " Come on! You and I both know you're broke, you don't got Shit! But any way, " <<endl;
                                                        cout <<"  Thanks for purchasing Internet pack with MTN. You Will receive a Mobile Money prompt soon. "<<endl;
                                                    break;
                                                    case 2:
                                                        cout << " You have declined the payment "<<endl;
                                                     break;
                                                        }
                                        } else if(op == 0) { cout << " Cancelled! "; } else { cout << " Unrecognized Input! "; }
                         break;
                        case 2:
                            int pin;
                            cout << " Enter MM PIN to continue: ";
                                    cin>>pin;
                                    system("cls");
                                    int App;
                                    cout << " Do you want to approve the transaction "<<endl;
                                    cout << " 1) Yes "<<endl;
                                    cout << " 2) No "<<endl;
                                    cin>> App;
                                    system("cls");
                                           switch (App) {
                                                    case 1:
                                                        cout << " Come on! You and I both know you're broke, you don't got Shit! But any way, " <<endl;
                                                        cout <<"  Thanks for purchasing Internet pack with MTN. You Will receive a Mobile Money prompt soon. "<<endl;
                                                    break;
                                                    case 2:
                                                        cout << " You have declined the payment "<<endl;
                                                     break;
                                                    default:
                                                        cout << " Invalid choice! "<<endl;
                                                     break;
                                                        }
                        break;
                         default:
                            cout << " Invalid choice! "<<endl;
                          break;
                            }
                 }
void Forwho(){
       int bdb;
    cout <<" Please Enter Your Choice "<<endl;
    cout << "  1. Buy For Self "<<endl;
    cout << "  2. Buy For Others "<<endl;
    cin >> bdb;
    system("cls");
             }
void SelDataBundle(){
    int Op;
    cout << "   Select Data Bundle "<< endl;
    cout << " 1. Flexi Bundles (GHC 0.03 - 399) "<< endl;
    cout << " 2. GHC 0.5 (20.46 MB) "<< endl;
    cout << " 3. GHC 1 (40.92 MB) "<< endl;
    cout << " 4. GHC 3 (401.61 MB) "<< endl;
    cout << " 5. GHC 10 (827.13 MB) "<< endl;
    cout << " 5. GHC 10 (182.08 GB) "<< endl;
    cout << " 0. Back "<< endl;
    cin >> Op;
    system("cls");
    float Amt;
       switch(Op){
          case 0:
          //  BundlePortal();
          break;
          case 1:
            float Amt;
            cout << " Enter amount to buy your preferred bundle (GHC 0.03 - 399) ";
            cin>> Amt;
            system("cls");
            do {
            if (Amt >=0.03 && Amt <=399){
                           paymentMode();
                           } else { cout<< " Please kindly Enter amount (GHC 0.03 - 399) wai "<<endl;
                                    cin >> Amt;
                                    system("cls");
                                  }
               } while(!Amt >= 0.03&& !Amt <=399);
         break;
                 }
                    }
void SelMidnightBundles(){
      int MidNight;
      cout << " Midnight Bundles "<<endl;
      cout << " 1. Flexi "<<endl;
      cout << " 0. Back "<<endl;
      cin>> MidNight;
      system("cls");
         switch(MidNight){
                     case 0:
                        // BundlePortal();
                     break;
                     case 1:
                         float Amt;
            cout << " Enter amount to buy your preferred bundle (GHC 0 - 2.99) ";
            cin>> Amt;
            system("cls");
            do {
            if (Amt >= 0&&Amt <= 2.99){
                           paymentMode();
                           } else { cout<< " Please kindly Enter amount (GHC 0 - 2.99) wai "<<endl;
                                    cin >> Amt;
                                  }
               } while(!Amt >= 0 && !Amt <= 2.99);
         break;


                         }
                        }
void MidnightBundle(){
    int MidNight;
    cout <<" Please Enter Your Choice "<<endl;
    cout << "  1. Buy For Self "<<endl;
    cout << "  2. Buy For Others "<<endl;
    cin >> MidNight;
    system("cls");
         switch(MidNight){
         case 1:
            SelMidnightBundles();
         break;
         case 2:
            int num1,num2;
            cout << " Enter Mobile Number: ";
            cin>>num1;
            system("cls");
            cout << " Enter Mobile Number Again: ";
            cin>>num2;
            system("cls");
            do {
            if (num1 == num2) {
                    SelMidnightBundles();
                              } else { cout << "  Invalid number, Please Enter a valid number: ";
                                        cin>>num1;
                                        system("cls");
                                        cout << "  Enter  number Again: ";
                                        cin>>num2;
                                        system("cls");
                                    }
               }while(num2 != num1);
         break;

                    }

                     }

void selectKokrokoobundles(){
 int kokrokoo;
      cout << " 1. GHC 1.08 "<<endl;
      cout << " 0. Back "<<endl;
      cin>> kokrokoo;
      system("cls");
         switch(kokrokoo){
                     case 0:
//                         BundlePortal();
                     break;
                     case 1:
                         int op;
            cout << " Y'ello! the GHC 1.08 Kokrokoo Bundle gives you 400MB of data. This bundle does not expire. "<<endl;
            cout << " 1. Buy "<<endl;
            cin >> op;
            system("cls");
            if (op == 1){
                           paymentMode();
                           } else {
                               cout<< " UNKNOWN APPLICATION "<<endl;
                                  }
         break;
                       }
                           }
void KokrokooBundle(){
 int Kokrokoo;
    cout <<" Please Enter Your Choice "<<endl;
    cout << "  1. Buy For Self "<<endl;
    cout << "  2. Buy For Others "<<endl;
    cin >> Kokrokoo;
    system("cls");
         switch(Kokrokoo){
         case 1:
            selectKokrokoobundles();
         break;
         case 2:
            int num1,num2;
            cout << " Enter Mobile Number: ";
            cin>>num1;
            system("cls");
            cout << " Enter Mobile Number Again: ";
            cin>>num2;
            system("cls");
            do {
            if (num1 == num2) {
                    selectKokrokoobundles();
                              } else { cout << "  Invalid number, Please Enter a valid number: ";
                                        cin>>num1;
                                        system("cls");
                                        cout << "  Enter  number Again: ";
                                        cin>>num2;
                                        system("cls");
                                     }
               }while(num2 != num1);
         break;

                         }
                     }
  void SMBstandardOp(){
       int SMB;
      cout << " Social Media Bundles "<<endl;
      cout << " 1. GHC 1 (81.30 MB) "<<endl;
      cout << " 2. GHC 5 (406.50 MB) "<<endl;
      cout << " 3. GHC 10 (813.01 MB) "<<endl;
      cin>> SMB;
      system("cls");
        // switch(SMB){
                    }
void SelectSocialMediaBundles(){
int SocialMedia;
      cout << " Social Media Bundles "<<endl;
      cout << " 1. Flexi "<<endl;
      cout << " 2. Standard "<<endl;
      cout << " 0. Back "<<endl;
      cin>> SocialMedia;
      system("cls");
         switch(SocialMedia){
                     case 0:
                      //   BundlePortal();
                     break;
                     case 1:
                         float Amt;
            cout << " Enter amount to buy your preferred bundle (GHC 0.03 - 1,000) "<<endl;
            cin>> Amt;
            system("cls");
            do {
            if (Amt >= 0.03 && Amt <=1000){
                           paymentMode();
                           } else { cout<< " Please kindly Enter amount (GHC 0.03 - 1,000) wai "<<endl;
                                    cin >> Amt;
                                  }
               } while(!Amt >= 0.03 && !Amt <= 1000);
                    break;
                    case 2:
                       SMBstandardOp();
                    break;

                           }
                                }
void SocialMediaBundles(){
int SocialMedia;
    cout <<" Please Enter Your Choice "<<endl;
    cout << "  1. Buy For Self "<<endl;
    cout << "  2. Buy For Others "<<endl;
    cin >> SocialMedia;
    system("cls");
         switch(SocialMedia){
         case 1:
            SelectSocialMediaBundles();
         break;
         case 2:
            int num1,num2;
            cout << " Enter Mobile Number: ";
            cin>>num1;
            system("cls");
            cout << " Enter Mobile Number Again: ";
            cin>>num2;
            system("cls");
            do {
            if (num1 == num2) {
                    SelectSocialMediaBundles();
                              } else { cout << "  Invalid number, Please Enter a valid number: ";
                                        cin>>num1;
                                        system("cls");
                                        cout << "  Enter  number Again: ";
                                        cin>>num2;
                                        system("cls");
                                     }
               }while(num2 != num1);
         break;

                         }
                         }
void VBstandardOp(){
     int VB;
      cout << " Video Bundles "<<endl;
      cout << "  1. GHC 1 (156.01 MB) "<<endl;
      cout << "  2. GHC 5 (780.03 MB) "<<endl;
      cout << "  3. GHC 10 (1.52 GB) "<<endl;
      cin>> VB;
      system("cls");
        // switch(VB){
                   }
void SelectVideoBundles(){
int VideoBundles;
      cout << " Video Bundles "<<endl;
      cout << " 1. Flexi "<<endl;
      cout << " 2. Standard "<<endl;
      cout << " 0. Back "<<endl;
      cin>> VideoBundles;
      system("cls");
         switch(VideoBundles){
                     case 0:
                      //   BundlePortal();
                     break;
                     case 1:
                         float Amt;
            cout << " Enter amount to buy your preferred bundle (GHC 0.03 - 1,000) "<<endl;
            cin>> Amt;
            system("cls");
            do {
            if (Amt >= 0.03 && Amt <=1000){
                           paymentMode();
                           } else { cout<< " Please kindly Enter amount (GHC 0.03 - 1,000) wai "<<endl;
                                    cin >> Amt;
                                  }
               } while(!Amt >= 0.03 && !Amt <= 1000);
                    break;
                    case 2:
                       VBstandardOp();
                    break;

                           }

                         }
void VideoBundles(){
int VideoBundles;
    cout <<" Please Enter Your Choice "<<endl;
    cout << "  1. Buy For Self "<<endl;
    cout << "  2. Buy For Others "<<endl;
    cin >> VideoBundles;
    system("cls");
         switch(VideoBundles){
         case 1:
            SelectVideoBundles();
         break;
         case 2:
            int num1,num2;
            cout << " Enter Mobile Number: ";
            cin>>num1;
            system("cls");
            cout << " Enter Mobile Number Again: ";
            cin>>num2;
            system("cls");
            do {
            if (num1 == num2) {
                    SelectVideoBundles();
                              } else { cout << "  Invalid number, Please Enter a valid number: ";
                                        cin>>num1;
                                        system("cls");
                                        cout << "  Enter  number Again: ";
                                        cin>>num2;
                                        system("cls");
                                     }
               }while(num2 != num1);
         break;

                         }
                   }
void IddBundlePackage(){
int IddBundles;
      cout << " Option 1 (Canada,China,USA,India) "<<endl;
      cout << "  1. Ghc 2.17 "<<endl;
      cout << "  2. Ghc 5.41 "<<endl;
      cout << "  3. Ghc 10.81 "<<endl;
      cout << "  0. Back "<<endl;
      cin>> IddBundles;
      system("cls");
         switch(IddBundles){
                     case 0:
//                         PortalSel();
                     break;
                     //case 1:

                       }
                      }
void SelectIddBundles(){
      int IddBundles;
      cout << " Select Preferred Package "<<endl;
      cout << "  1. Canada, China,USA,India "<<endl;
      cout << "  2. Check IDD Bundle Balance "<<endl;
      cout << "  0. Back "<<endl;
      cin>> IddBundles;
      system("cls");
         switch(IddBundles){
                     case 0:
//                         PortalSel();
                     break;
                     case 1:
                         IddBundlePackage();
                         paymentMode();
                     break;
                     case 2:
                        cout << " Dear User, you don't have any active bundles available in this category. ";
                     break;

                          }
                      }
void IddBundles(){
int IddBundles;
    cout <<" Please Enter Your Choice "<<endl;
    cout << "  1. Buy For Self "<<endl;
    cout << "  2. Buy For Others "<<endl;
    cin >> IddBundles;
    system("cls");
         switch(IddBundles){
         case 1:
            SelectIddBundles();
         break;
         case 2:
            int num1,num2;
            cout << " Enter Mobile Number: ";
            cin>>num1;
            system("cls");
            cout << " Enter Mobile Number Again: ";
            cin>>num2;
            system("cls");
            do {
            if (num1 == num2) {
                    SelectIddBundles();
                    paymentMode();
                              } else { cout << "  Invalid number, Please Enter a valid number: ";
                                        cin>>num1;
                                        system("cls");
                                        cout << "  Enter  number Again: ";
                                        cin>>num2;
                                        system("cls");
                                     }
               }while(num2 != num1);
         break;

                         }
                 }
void SevenMore(){
    int SelOp;
    cout << "   Select Option "<< endl;
    cout << " 1. Buy Combo Bundle "<< endl;
    cout << " 2. Browse from Main Account "<< endl;
    cout << " 3. Check Bundle Balance "<< endl;
    cout << " 4. Notifications "<< endl;
    cout << " 5. Install myMTN App "<< endl;
    cout << " 0. Back "<< endl;
    cin >> SelOp;
    system("cls");
      switch(SelOp){
               case 0:
//                BundlePortal();
               break;
                   }
                   }

 void NinetyNineMore(){
    int option;
    cout << " 4) Social Media Bundles "<< endl;
    cout << " 5) Video Bundles "<< endl;
    cout << " 6) IDD BundleS "<< endl;
    cout << " 7) More "<< endl;
    cout << "  0) Back "<< endl;
    cin >> option;
    system("cls");
    switch(option){

          case 0:
                InternetBundles();
          break;
          case 4:
               SocialMediaBundles();
          break;
          case 5:
               VideoBundles();
          break;
          case 6:
               IddBundles();
          break;
          case 7:
                SevenMore();
          break;
                  }

           }

void BundlePortal(){
    int Select;
    cout << " Welcome to Bundle Portal. Please select your bundle. "<< endl;
    cout << "  1) Buy Data Bundle "<< endl;
    cout << " 2) Midnight Bundles "<< endl;
    cout << "  3) Kokrokoo Bundle "<< endl;
    cout << " 99) More "<< endl;
    cout << "  0) Back "<< endl;
    cin >> Select;
    system("cls");
    switch(Select){
        case 1:
            Forwho();
            SelDataBundle();
        break;
        case 2:
            MidnightBundle();
        break;
        case 3:
            KokrokooBundle();
        break;
        case 99:
            NinetyNineMore();
         break;
        case 0:
           InternetBundles();
        break;
        default:
            cout << " Invalid choice ";
         break;
                  }
                     }
void PortalMore() {
    int Option;
    cout << " 2) Go to myMTN app (Free 500MB for new users and 50% 4G bonus) "<< endl;
    cout << "  0) Back "<< endl;
    cin>> Option;
    system("cls");
          switch (Option) {
          case 0:
            InternetBundles();
          break;
          case 2:
            cout<< " https://mymtn.onelink.me/cB5t/myMTN ";
                          }
            }

void internetBundles(){
    int Bundle;
    cout << " Welcome to the Bundle Portal. Please select an option "<< endl;
    cout << "  1) Proceed to buy (No 4G bonus) "<< endl;
    cout << " 99) More "<< endl;
    cin>> Bundle;
    system("cls");
    switch(Bundle){
              case 99:
                 PortalMore();
              break;
              case 1:
                 BundlePortal();
              break;
              default:
                  cout<< "  Invalid choice ";
                break;
                  }
                   }
void Welcomepack(){
    int wlcmPk;
cout << " 1) Buy Airtime - Welcome Bonus "<<endl;
cout << " 2) Check Bonus Account  "<<endl;
cout << " 0) Back "<<endl;
cin >> wlcmPk;
system("cls");
        string name;
        int pIn;
      switch(wlcmPk){
              case 1:
           cout << " Please Enter Your Name: ";
           cin >> name;
           system("cls");
           cout << " Dear "<<name<< ", you're no longer eligible for the Welcome Pack since you have already redeemed the airtime. ";
       break;
       case 2:
            cout << " Enter Pin: ";
            cin >> pIn;
            system("cls");
            cout << " Your Bonus balance is GHS 0.00 ";
           break;
           case 0:
        // AirTime();
         break;
         default:
             cout << " Invalid choice ";
             break;
                    }
                  }

 void AirTime(){
    int air;
    cout << " Airtime "<< endl;
    cout << "  1) Self "<< endl;
    cout << "  2) Others "<< endl;
    cout << "  3) Welcome Packs "<< endl;
    cout << "  4) Other Networks "<< endl;
     cout << " 0) Back "<<endl;
     cin >>air;
     system("cls");
            switch(air) {
                float Amt;
                int num1,num2,num3;
            case 0:
               // AirtimeBundles();
             break;
            case 1:
                cout << " Enter Amount ";
                cin >> Amt;
                system("cls");
                cout << " Enter your Number: ";
                cin >> num1;
                system("cls");
                cout << " Dear User, Send GHS" <<Amt<<" AirtimeSelf to " <<num1<<" . Fee is GHS 0.00. Choose 1 to Enter MM PIN or 2 to cancel. "<<endl;
                cin >> num2;
                system("cls");
                  if (num2 == 1) { cout << " Enter MM PIN: ";
                                   cin >> num3;
                  }else { cout << " Decline ";}
             break;
             case 2:
                cout << " Enter Amount: ";
                cin>> Amt;
                cout << " Enter Mobile Number :";
                cin >> num1;
                cout << " Confirm Mobile Number: ";
                cin >> num2;
                if (num1 == num2) {
                cout << " Transaction Complete! ";
                                  } else { " Invalid number! ";}
             break;
             case 3:
                Welcomepack();
             break;
             case 4:
                cout << " Enter recipient phone number: ";
                cin >> num1;
                system("cls");
                cout << " Re-Enter recipient phone number: ";
                cin >> num2;
                system("cls");
                cout << " Enter amount (GHS) minimum:0.20, maximum: 500.00 "<<endl;
                cin >> Amt;
                if (num1 == num2 ) { cout<<" Your payment for GHS" << Amt << " to " << num2 << " has been completed "; } else{ cout << " Invalid number or connection lost, Try Again after some time ";}
                        }
              }
void FixedBroadband() {
int fixed;
    cout << " Please Select an acount "<< endl;
    cout << "  1) 0593067455 233593067455 "<< endl;
    cout << "  9) Others "<< endl;
    cin>> fixed;
    system("cls");
       switch(fixed){
           int num;
   case 1:
    cout <<" Service is currently unavailable (Exit Application Down),please try after some time.  ";
    break;
   case 9:
    cout << " Enter broadband number: ";
    cin>> num;
    system("cls");
    cout <<" Sorry you don't have access to this service kindly call 0244308111 for more information ";
                    }
                      }
 void selectSchAirtime(){
     int select;
    cout << " Select Scheduled Plan "<< endl;
    cout << "  1) DAILY "<< endl;
    cout << "  2) WEEKLY "<< endl;
    cout << "  3) MONTHLY "<< endl;
    cout << "  0) Back"<< endl;
     cin>>select;
     system("cls");
        switch(select){
            float num;
            int pin;
      case 0:
        //airtimeBundles();
      break;
      case 1:
         cout << " Enter Amount: ";
         cin>>num;
         system("cls");
         cout << " Dear User, Please do you confirm your DAILY schedule of GHS"<<num<<". Fee is GHS 0.00. Enter MM PIN or Cancel "<<endl;
         cin>>pin;
         system("cls");
         cout << " Service is currently unavailable (Exit Application Down),please try after some time.  ";
       break;
       case 2:
         cout << " Enter Amount: ";
         cin>>num;
         system("cls");
         cout << " Dear User, Please do you confirm your WEEKLY schedule of GHS"<<num<<". Fee is GHS 0.00. Enter MM PIN or Cancel "<<endl;
         cin>>pin;
         system("cls");
         cout << " Service is currently unavailable (Exit Application Down),please try after some time.  ";
       break;
       case 3:
         cout << " Enter Amount: ";
         cin>>num;
         system("cls");
         cout << " Dear User, Please do you confirm your MONTHLY schedule of GHS"<<num<<". Fee is GHS 0.00. Enter MM PIN or Cancel "<<endl;
         cin>>pin;
         system("cls");
         cout << " Service is currently unavailable (Exit Application Down),please try after some time.  ";
       break;
                        }
                        }
 void ScheduledAirtime(){
 int select;
    cout << "  1) Register "<< endl;
    cout << "  2) Revise Scheduled Purchase "<< endl;
    cout << "  3) Deactivate Scheduled "<< endl;
    cout << "  0) Back "<< endl;
    cin >> select;
    system("cls");
   switch(select){
             case 0:
//                airtimeBundles();
              break;
             case 1:
                ScheduledAirtime();
              break;
             case 2:
                cout<< " No available choices. ";
             break;
             case 3:
                cout<< " No available choices. ";
             break;
                 }
                        }
void Just4U(){
    int pack;
    cout << " Select you MTN Just4U offer "<< endl;
    cout << "  1) 130MB daily pack @ Ghc2 "<< endl;
    cout << "  2) 500MB daily + 100MB Bonus @ GHc3 "<< endl;
    cout << "  3) 110MB 15-day pack @ GHc1.8 "<< endl;

    cin>> pack;
    system("cls");
      switch(pack){
           case 1:
            cout << " Buy the 130MB daily pack at GHc2 "<<endl;
            cout << " 1. Confirm "<<endl;
            cout << " 0. Back "<<endl;
            cin>>pack;
            system("cls");
            if (pack ==1) {  cout << " You will receive an SMS to confirm your purchase of 130MB daily pack @ Ghc2 "; } else if (pack == 0) {Just4U();}
            break;
           case 2:
            cout << " Buy the 500MB daily + 100MB Bonus @ GHc3 "<<endl;
            cout << " 1. Confirm "<<endl;
            cout << " 0. Back "<<endl;
            cin>>pack;
            system("cls");
            if (pack ==1) { cout << " You will receive an SMS to confirm your purchase of 500MB daily + 100MB Bonus @ GHc3 "; } else if (pack == 0) {Just4U();}
            break;
           case 3:
            cout << " Buy the 110MB 15-day pack @ GHc1.8 "<<endl;
            cout << " 1. Confirm "<<endl;
            cout << " 0. Back "<<endl;
            cin>>pack;
            system("cls");
            if (pack ==1) {cout << " You will receive an SMS to confirm your purchase of 110MB 15-day pack @ GHc1.8 "; } else if (pack == 0) {Just4U();}
            break;

                }
                }

void AirtimeBundles()  {
            int Option;
    cout << " Airtime & Bundles "<< endl;
    cout << "  1) Airtime "<< endl;
    cout << "  2) Internet Bundles "<< endl;
    cout << "  3) Fixed Broadband "<< endl;
    cout << "  4) Scheduled Airtime "<< endl;
    cout << "  5) Just4U "<< endl;
    cout << "  0) Back "<< endl;
    cin>>Option;
    system("cls");
             switch(Option){
             case 0:
                menu();
             break;
             case 1:
                AirTime();
             break;
             case 2:
                BundlePortal();
            break;
             case 3:
                FixedBroadband();
              break;
             case 4:
                ScheduledAirtime();
             break;
             case 5:
                Just4U();
             break;

                            }
                       }
void AllowCashOut() {
           int allw;
     cout << " Allow CashOut "<< endl;
     cout << "  1) Yes "<< endl;
     cout << "  2) No "<< endl;
     cout << "  0) Back "<< endl;
     cin >> allw;
     system("cls");
               switch(allw) {
               case 0:
                  menu();
               break;
               case 1:
                cout << " Cash Out is Allowed ";
                break;
               case 2:
                 cout << " Cash Out is not Allowed ";
                break;
                            }
                          }
 void TransfertoBank(){
     cout << " Transfer to Bank "<< endl;
     cout << "  1) Zenith Bank "<< endl;
     cout << "  2) ADB "<< endl;
     cout << "  3) ABSA "<< endl;
     cout << "  4) GT Bank "<< endl;
     cout << "  5) Fidelity Bank "<< endl;
     cout << "  6)  Access Bank " << endl;
     cout << "  7) CAlBank "<< endl;
     cout << "  8) EcoBank "<< endl;
     cout << "  9) UBA "<< endl;
     cout << "  10) Republic "<< endl;
     cout << "                 "<< endl;
     cout << "  # for next "<< endl;
    char har;
     cin >>har;
     system("cls");
    if ( har == '#') {  cout << "  11) CBG "<< endl;
            cout << " 12) First Atlantic "<< endl;
            cout << " 13) Stanbic "<< endl;
            cout << " 14) GCB "<< endl;
            cout << " 15) UMB "<< endl;
            cout << " 16) FMB "<< endl;
            cout << " 17) Bank of Africa "<< endl;
            cout << " 18) Prudential "<< endl;
            cout << "  0) Back "<< endl;
                      }

else if ( har == '1' ) { cout << " You are currently not registered for this service. Please contact your bank "; }
else if ( har == '2' ) {  cout << " You are currently not registered for this service. Please contact your bank "; }
else if ( har == '3' ) { cout << " You are currently not registered for this service. Please contact your bank ";}
else if ( har == '4' ) { cout << " You are currently not registered for this service. Please contact your bank ";}
else if ( har == '5' ) { cout << " You are currently not registered for this service. Please contact your bank "; }
else if ( har == '6' ) { cout << " You are currently not registered for this service. Please contact your bank ";}
else if ( har == '7' ) { cout << " You are currently not registered for this service. Please contact your bank ";}
else if ( har == '8' ) { cout << " You are currently not registered for this service. Please contact your bank "; }
else if ( har == '9' ) {  cout << " You are currently not registered for this service. Please contact your bank "; }
else if ( har == '10' ) { cout << " You are currently not registered for this service. Please contact your bank ";}
else if ( har == '11' ) { cout << " You are currently not registered for this service. Please contact your bank ";}
else if ( har == '12' ) { cout << " You are currently not registered for this service. Please contact your bank "; }
else if ( har == '13' ) { cout << " You are currently not registered for this service. Please contact your bank ";}
else if ( har == '14' ) { cout << " You are currently not registered for this service. Please contact your bank ";}
else if ( har == '15' ) { cout << " You are currently not registered for this service. Please contact your bank "; }
else if ( har == '16' ) {  cout << " You are currently not registered for this service. Please contact your bank "; }
else if ( har == '17' ) { cout << " You are currently not registered for this service. Please contact your bank ";}
else if ( har == '18' ) { cout << " You are currently not registered for this service. Please contact your bank ";}
else if ( har == '0' ) {//BankServices();
  }else { cout<< " Invalid choice!, "<<endl;}
                 }

void TransferFromBank(){
 cout << " Transfer to Bank "<< endl;
     cout << "  1) Zenith Bank "<< endl;
     cout << "  2) ADB "<< endl;
     cout << "  3) ABSA "<< endl;
     cout << "  4) GT Bank "<< endl;
     cout << "  5) Fidelity Bank "<< endl;
     cout << "  6)  Access Bank " << endl;
     cout << "  7) CAlBank "<< endl;
     cout << "  8) EcoBank "<< endl;
     cout << "  9) UBA "<< endl;
     cout << "  10) Republic "<< endl;
     cout << "                 "<< endl;
     cout << "  # for next "<< endl;
    char har;
     cin >>har;
     system("cls");
    if ( har == '#') {  cout << "  11) CBG "<< endl;
            cout << " 12) First Atlantic "<< endl;
            cout << " 13) Stanbic "<< endl;
            cout << " 14) GCB "<< endl;
            cout << " 15) UMB "<< endl;
            cout << " 16) FMB "<< endl;
            cout << " 17) Bank of Africa "<< endl;
            cout << " 18) Prudential "<< endl;
            cout << "  0) Back "<< endl;
                      }

else if ( har == '1' ) { cout << " You are currently not registered for this service. Please contact your bank "; }
else if ( har == '2' ) {  cout << " You are currently not registered for this service. Please contact your bank "; }
else if ( har == '3' ) { cout << " You are currently not registered for this service. Please contact your bank ";}
else if ( har == '4' ) { cout << " You are currently not registered for this service. Please contact your bank ";}
else if ( har == '5' ) { cout << " You are currently not registered for this service. Please contact your bank "; }
else if ( har == '6' ) { cout << " You are currently not registered for this service. Please contact your bank ";}
else if ( har == '7' ) { cout << " You are currently not registered for this service. Please contact your bank ";}
else if ( har == '8' ) { cout << " You are currently not registered for this service. Please contact your bank "; }
else if ( har == '9' ) {  cout << " You are currently not registered for this service. Please contact your bank "; }
else if ( har == '10' ) { cout << " You are currently not registered for this service. Please contact your bank ";}
else if ( har == '11' ) { cout << " You are currently not registered for this service. Please contact your bank ";}
else if ( har == '12' ) { cout << " You are currently not registered for this service. Please contact your bank "; }
else if ( har == '13' ) { cout << " You are currently not registered for this service. Please contact your bank ";}
else if ( har == '14' ) { cout << " You are currently not registered for this service. Please contact your bank ";}
else if ( har == '15' ) { cout << " You are currently not registered for this service. Please contact your bank "; }
else if ( har == '16' ) {  cout << " You are currently not registered for this service. Please contact your bank "; }
else if ( har == '17' ) { cout << " You are currently not registered for this service. Please contact your bank ";}
else if ( har == '18' ) { cout << " You are currently not registered for this service. Please contact your bank ";}
else if ( har == '0' ) {//BankServices();
  }else { cout<< " Invalid choice!, "<<endl;}
                        }
void CardServices(){
                   cout << " You're not allowed to access this service ";
                   }
void ATMcashOut(){
    int op;
     cout << "  1) Generate Token "<< endl;
     cout << "  2) Retrieve Active Tokens "<< endl;
     cout << "  3) Reverse Token "<< endl;
     cout << "  4) Check Token "<< endl;
     cin>> op;
     system("cls");
        switch(op){
            int code;
              case 1:
                cout << " Four Digit Secret Code: "<<endl;
                cin>> code;
                system("cls");
                float amt;
                cout<< " Enter An Amount Between 5 and 400 GHS: ";
                cin>> amt;
                system("cls");
                do {
                if(amt >6 && amt <400 ){ cout << " Thanks for choosing MTN cardless, "<<endl;
                                     cout << " Kindly check 'My approvals' option to approve your transaction. "<<endl;
                                   } else { cout << " Invalid Amount, Please Enter An Amount Between 5 and 400 GHS: "; }
                  } while(!amt >6 && !amt <400);
              break;
              case 2:
                  cout << " NO records found ";
              break;
              case 3:
                  int tkn;
                  cout<<" Please Enter Token "<<endl;
                  cin>> tkn;
                  system("cls");
                  cout << " invalid Token ";
              break;
              case 4:
                  cout<<" Enter Token to check Status "<<endl;
                  cin>> tkn;
                  system("cls");
                  cout << " invalid Token ";
              break;
                  }
                 }

 void BankServices()
                 {
    int BknSer;
     cout << " Bank Services "<< endl;
     cout << "  1) Transfer to Bank "<< endl;
     cout << "  2) Transfer from Bank "<< endl;
     cout << "  3) ATM CashOut "<< endl;
     cout << "  4) Card Services "<< endl;
     cout << "  0) Back "<< endl;
     cin>> BknSer;
     system("cls");
         switch(BknSer){
                   case 0:
                     //  FinancialServices();
                   break;
                   case 1:
                       TransfertoBank();
                   break;
                   case 2:
                       TransferFromBank();
                   break;
                   case 3:
                       ATMcashOut();
                   break;
                   case 4:
                       CardServices();
                   break;
                       }
                  }
void Savings()
            {
                int svg;
     cout << " Savings "<< endl;
     cout << "  1) Yello Save "<< endl;
     cout << "  2) SIKA SAVE "<< endl;
     cout << "  3) Pesewa SuSu "<< endl;
     cout << "  0) Back "<< endl;
     cin>> svg;
     system("cls");
        switch(svg){
               case 0:
               //   FinancialServices();
               break;
               case 1:
                   cout << " Welcome to yello Save "<< endl;
                  cout << "  1) Register "<< endl;
                  cout << "  2) Cancel "<< endl;
                break;
                case 2:
                    cout << " Welcome to Sika Save, kindly be informed the service will be coming soon. we appreciate your patience  ";
                break;
                case 3:
                    cout << " y'ello Valued Customer, Susu is going digital! Watch this Space for an exciting savings experience with Pesewa Susu. Visit us again soon to reister and earn more interest. Thank you ";
                break;

                   }

            }
  void Loans(){
      int lons;
    cout << " Loans "<< endl;
     cout << "  1) QWICKLOAN "<< endl;
     cout << "  2) XpressLoan "<< endl;
     cout << "  3) AhomkaLoan "<< endl;
     cout << "  4) MoMo Advance "<< endl;
     cin>> lons;
     system("cls");
       switch (lons){
       case 1:
                int pin;
            cout << " Enter MM PIN to confirm "<<endl;
            cin>>pin;
            system("cls");
            cout << " Sorry, system not Available ";
       break;
       case 2:
    cout << " Welcome to loans "<< endl;
     cout << "  1) Get a loan "<< endl;
     cout << "  2) Repay my loan "<< endl;
     cout << "  3) Check my loan balance "<< endl;
     cout << "  4) About "<< endl;
     cout << "  4) View key T and C's "<< endl;

       break;
       case 3:
           cout << " Welcome to loans "<< endl;
     cout << "  1) Get a loan "<< endl;
     cout << "  2) Repay my loan "<< endl;
     cout << "  3) Check my loan balance "<< endl;
     cout << "  4) About "<< endl;
     cout << "  4) View key T and C's "<< endl;

       break;
       case 4:
           cout << " You're not allowed to Access this Service ";
        break;
                    }
              }
void SelectPenAndInvest(){
    int Opt;
     cout << " Welcome to my own Pension Schemes "<< endl;
     cout << "  1) Enroll "<< endl;
     cout << "  2) Check Balance "<< endl;
     cout << "  3) Voluntary Payment "<< endl;
     cout << "  4) Withdrawal "<< endl;
     cout << "  5) More "<< endl;
     cin>> Opt;
     system("cls");
         switch(Opt){
           case 1:
            cout << " Pension withdrawals  allowed after 5 years.  "<<endl;
             cout << "  Investment withdrawals allowed after 1 year.  "<<endl;
              cout << "  Interest rates can change without notice. "<<endl;
               cout << " 1. Register  "<<endl;
             cout << "  2. Cancel  "<<endl;
             cin>>Opt;
             system("cls");
             break;

                    }
                         }
void PensionsAndInvestments(){
    int Opt;
       cout << " Pensions and Investments "<< endl;
     cout << "  1) My Own Pension "<< endl;
     cout << "  2) Buy Treasure Bills "<< endl;
     cout << "  0) Back "<< endl;
     cin>>Opt;
     system("cls");
        switch(Opt){
            case 1:
                SelectPenAndInvest();
             break;
            case 2:
                cout <<" Service is currently unavailable (Exit Application Down),please try after some time.  ";
             break;
            case 0:
  //              FinancialServices();
            break;
                   }
                             }
void miWay(){
    int Ins;
    cout << " Welcome to miWay "<< endl;
     cout << "  Life insurance for you and a loved one "<< endl;
     cout << "  1) Terms and conditions "<< endl;
     cout << "  2) Register "<< endl;
     cout << "  3) Exit "<< endl;
     cin>> Ins;
     system("cls");
         switch(Ins) {
          case 1:
               cout <<" Service is currently unavailable (Exit Application Down),please try after some time.  ";
        break;
          case 2:
 cout <<" Service is currently unavailable (Exit Application Down),please try after some time.  ";
           break;
          case 3:
               cout <<" Thank you for choosing miWay powered by miLife ";
           break;
          default:
              cout << " Invalid choice ";
           break;
            }
         }

void Insurances(){
    int option;
     cout << " Insurances "<< endl;
     cout << "  1) miWay "<< endl;
     cout << "  2) AllianzLife "<< endl;
     cout << "  3) Mobinsure "<< endl;
     cout << "  0) Back "<< endl;
      cin>> option;
      system("cls");
      switch(option){
          case 0:
         //     FinancialServices();
          break;
          case 1:
              miWay();
          break;
                 }
            }
void TradeShares(){
                int Trad;
            cout << " Fee is -. Enter MM PIN or 2 to Cancel "<<endl;
            cin >> Trad;
            system("cls");
            cout<< " Service is currently unavailable (Exit Application Down),please try after some time. ";
              if( Trad == 0) { cout << " Canceled! "; }
                  }

void FinancialServices(){
    int money;
     cout << " Financial Services "<< endl;
     cout << "  1) Bank Services "<< endl;
     cout << "  2) Savings "<< endl;
     cout << "  3) Loans "<< endl;
     cout << "  4) Pensions and Investments "<< endl;
     cout << "  5) Insurances "<< endl;
     cout << "  6) Trade Shares "<< endl;
     cout << "  0) Back "<< endl;
      cin>> money;
      system("cls");
        switch(money){
           case 0:
               menu();
            break;
           case 1:
               BankServices();
           break;
           case 2:
               Savings();
           break;
           case 3:
               Loans();
            break;
           case 4:
               PensionsAndInvestments();
            break;
           case 5:
               Insurances();
           break;
           case 6:
               TradeShares();
            break;
                     }
                    }

  void CheckBalance(){
   int pin;
   cout << " Y'ello!!! Welcome  "<<endl;
   cout << " Fee is GHS 0.00. Enter MM PIN "<<endl;
   cin>>pin;
   system("cls");
   cout << "  Dear User, you know your ass is broke as  hell, and you still checking your Acc.Balance? Are you for real? lol, well:  "<<endl;
   cout << "  Current Balance: GHS 0.00, Available Balance: 0.00 ";
   cout << "                             " << endl;
 cout << "                             " << endl;
 cout << "                             " << endl;
 cout << "                             " << endl;
 cout << "                             " << endl;
 cout << "                             " << endl;
 cout << "                             " << endl;
 cout << "                             " << endl;
                     }

 void allowCashOut() {
     cout << " Allow CashOut "<< endl;
     cout << "  1) Yes "<< endl;
     cout << "  2) No "<< endl;
     cout << "  0) Back "<< endl;
      int allw;
     cin >> allw;
     system("cls");
               switch(allw) {
               case 0:
                  menu();
               break;
               case 1:
                cout << " Cash Out is Allowed ";
                break;
               case 2:
                 cout << " Cash Out is not Allowed ";
                break;
                            }
                          }

void MyApprovals(){
cout << "  Enter PIN to get your Pending Approval list "<<endl;
int pin;
cin>>pin;
system("cls");
cout<< "  You have no Pending Approvals ";
                   }
 void fraudster(){
     int num;
        cout<< "  Enter Fraudster's number "<<endl;
        cin>>num;
        system("cls");
        cout << "  Did you Transfer the Money? "<<endl;
        cout << " 1) Yes "<<endl;
        cout << " 2) No "<<endl;
        cout << " 0) Back "<<endl;
        int op;
        system("cls");        string det;
          switch(op){
                case 0:
                //    ReportFraud();
                break;
                case 1:
                    cout<< "  Thank you for reporting "<<endl;
                break;
                case 2:
                    cout<< "  Enter Details "<<endl;
                    cin>>det;
                    system("cls");
                    cout<< "  Enter Incident date(ddmmyyyyy "<<endl;
                    cin>>det;
                    system("cls");
                    cout<< "  Thank you for reporting, will will deal with that theif accordingly, Relax,sit back and watch us do this.  "<<endl;
                    cout<< "  MTN, Every where you Go. "<<endl;
                break;
                    }
                 }
 void ReportFraud(){
cout << " Type of Fraud "<< endl;
cout << "  1) Wrong Transfers "<< endl;
cout << "  2) New Reversal Process "<< endl;
cout << "  3) Fake SMS "<< endl;
cout << "  4) Fake Blocking "<< endl;
cout << "  5) Fake Promotions "<< endl;
cout << "  0) Back "<< endl;
 int opt;
cin>>opt;
system("cls");
     switch(opt){
      case 0:
        //  MyWallet();
      break;
      case 1:
          fraudster();
      break;
      case 2:
          fraudster();
      break;
      case 3:
          fraudster();
      break;
      case 4:
          fraudster();
      break;
      case 5:
          fraudster();
      break;
                }
                   }

 void Statements(){
 cout << " Statements "<< endl;
cout << "  1) Statement Request  "<< endl;
cout << "  2) My Agent or Merchant Statemet "<< endl;
cout << "  3) Check Transaction Staus "<< endl;
cout << "  4) Mini Statemet "<< endl;
cout << "  0) Back "<< endl;
 int stat;
cin>>stat;
system("cls");
int pin,num;
string add1,add2;
       switch(stat){
     case 0:
      //   MyWallet();
     break;
     case 1:
         cout<< "  Enter MM PIN "<<endl;
        cin>>pin;
        system("cls");
        do {
        cout<< "  Enter a valid email address "<<endl;
        cin>>add1;
        system("cls");
        cout<< "  Please confirm email address "<<endl;
        cin>>add2;
        system("cls");
        if(add1 == add2) {
                string date;
        cout<< "  Enter start of request in the format:( Day Month Year "<<endl;
        cout<< "  ). eg: 15 09 2023. Duration is two years of history from today "<<endl;
        cin>>date;
        system("cls");
        cout<< "  With your broke ass Account? Sorry, you have no records "<<endl;
                       } else { cout<< "  Please Enter a valid email  "<<endl; }
           } while(add1 != add2 );
     break;
     case 2:
        cout<< "  Please Enter your Mobile Number  "<<endl;
         cin>>num;
        system("cls");
         cout<< "  Enter MM PIN "<<endl;
        cin>>pin;
        system("cls");
         cout<< " No merchant account linked to your number: "<<num<<endl;
     break;
     case 3:
         cout<< "  Enter MM PIN "<<endl;
        cin>>pin;
        system("cls");
        cout << " Are you a Sender or Receiver? "<< endl;
       cout << "  1) Sender  "<< endl;
        cout << "  2) Receiver "<< endl;
        cin>>num;
        system("cls");
        if (num == 1) {
                string date;
        cout<< "  Enter start of request in the format:( Day Month Year "<<endl;
        cout<< "  ). eg: 15 09 2023. Max date is three months of history from today "<<endl;
        cin>>date;
        system("cls");
        cout<< "  You don't have how will you even send someone some? Well Sorry, you have no MoMo sending records Cos you broke! "<<endl;
                      } else if (num == 2) {
                          string date;
        cout<< "  Enter start of request in the format:( Day Month Year "<<endl;
        cout<< "  ). eg: 15 09 2023. Max date is three months of history from today "<<endl;
        cin>>date;
        system("cls");
        cout<< "    Sorry, you have no MoMo Receiving records, broke ass! lol "<<endl;
                                          }
     break;
     case 4:
        cout<< "  Enter MM PIN "<<endl;
        cin>>pin;
        system("cls");
         cout << " Mini-Statement "<< endl;
         cout << "  2023-09-23 External_Payment GHS 1.00 "<< endl;
         cout << "  2023-09-23 Cash_Out GHS 5.00 "<< endl;
         cout << "  2023-09-23 Cash_Out GHS 7.00 "<< endl;
         cout << "                           "<< endl;
         cout << "                            "<< endl;
         cout << "  That's all, Thank you for using Mobile Money "<< endl;
     break;
                   }
                  }

void changepin(){
    cout << "  1) Change PIN "<< endl;
    int CRP;
    cin>> CRP;
system("cls");
int pin1,pin2,pin3;
switch(CRP){
   case 1:
    cout << "  WARNING! ! ! DONOT ENTER ANY THING BUT NUMBERS ONLY! "<< endl;
    cout << "   "<< endl;
    cout << "   "<< endl;
    cout << "   "<< endl;
    cout << "   "<< endl;
    cout << "   "<< endl;
    cout << "  Enter Old PIN Code "<< endl;
    cin>> pin1;
    system("cls");

    cout << "  Enter New PIN Code "<< endl;
    cin>> pin2;
       system("cls");
do {
if ( pin2 == pin1) {
    cout << "  Please Enter New PIN Code "<< endl;
    cin>> pin2;
    system("cls");
                   }
   } while ( pin2 == pin1);

if (pin2 != pin1 ) {
    cout << "  Confirm New PIN Code "<< endl;
    cin>> pin3;
    system("cls");
do {
if (pin3 != pin2 ) {
cout << "  Please Confirm New PIN Code "<< endl;
cin>> pin3;
system("cls");
                   }
   }while (pin3 != pin2 );

    if (pin3 == pin2 ) {
    cout << " PIN Changed Successfully   "<< endl;
                       }
                    }

                  }
}
  void ChangeResetPIN(){
cout << " Change & Reset PIN "<< endl;
cout << "  1) Change PIN "<< endl;
cout << "  2) Reset PIN "<< endl;
cout << "  0) Back "<< endl;
int CRP;
cin>> CRP;
system("cls");
int pin1,pin2,pin3;
int res;
switch(CRP){
   case 0:
//       MyWallet():
   break;
   case 1:
       changepin();
   break;
   case 2:
cout << " Reset PIN "<< endl;
cout << "  1) Self PIN Reset  "<< endl;
cout << "  0)) Back "<< endl;
 cin>> res;
system("cls");
    if ( res == 1){
        cout<< " Service is currently unavailable (Exit Application Down),please try after some time. ";
                  } else if ( res == 0) { ChangeResetPIN(); }
   break;
           }
                       }
void MoMoPromoChecker()  {
  char har = '#';
cout << " Y'ello, you have 0 points in the MoMo Promo. Use "<< endl;
cout << " the MoMo App... "<< endl;
cout << "  # for next "<< endl;

do{
cin >>har;
system("cls");
if (har =='#'){cout << " wallet to make payments to Merchant IDs and QR  "<< endl;
cout << " Codes  to earn... "<< endl;
cout << "  # for next "<< endl;
              }else {cout <<" Please Enter '#' wai "<< endl; }
  }while(har != '#' );

do {
cin >>har;
system("cls");
 if (har =='#' ) { cout << " points. "<< endl; }else { cout << " Please Enter '#' wai "<< endl; }
   } while(har != '#' );
                         }

  void Reversals(){
cout << " Reversals "<< endl;
cout << "  1) Airtime     Reversal "<< endl;
cout << "  2) Transaction Reversal "<< endl;
cout << "  0) Back "<< endl;
 int rev;
cin>> rev;
system("cls");
       switch(rev){
              case 0:
               //   MyWallet();
              break;
              case 1:
                  cout << " Sorry, the minimum amount for airtime reversal is GHC 10.00, But you're broke though, remember? lol "<< endl;
              break;
              case 2:
                  cout << "  You are not allowed for this service "<< endl;
              break;

                  }
                  }

    void CheckWalletLimits(){
       int lim;
       cout << " Enter MM PIN code: "<< endl;
       cin>> lim;
       system("cls");
       cout << " Your Daily Limit is GHS 10,000.00 , You have used GHS 0.00.  "<<endl;
       cout << " Your Balance Left is GHS 10,000.00. No Monthly Limit is available for you cos you broke, remember? lol  ";
    }
   void favrit(){
cout << " Favorite "<< endl;
cout << "  1) Add Favorite "<< endl;
cout << "  2) Delete Favorite "<< endl;
cout << "  0) Back "<< endl;
int rit;
cin>> rit;
system("cls");
string name;
int num1,num2;
int pin;
      switch(rit){
       case 0:
//          harsh();
       break;
       case 1:
           do {
           cout << "  Enter name "<<endl;
           cin>>name;
           system("cls");
            cout << "  Enter Mobile Number "<<endl;
           cin>>num1;
           system("cls");
           cout << "  Enter Mobile Number Again "<<endl;
           cin>>num2;
           system("cls");
           if ( num1 == num2) { cout << " New name added  was successful  "; }
           else { cout << " invalid Number!   Try Again  "<<endl; }
              } while(num1 != num2);
       break;
       case 2:
            cout << "  Find name "<<endl;
           cin>>name;
           system("cls");
            cout << "  Enter Pin Code "<<endl;
           cin>>pin;
           system("cls");
           cout << "  No available choices "<<endl;
       break;
                            }
                   }

 void NameNextofKin(){
    string name;
  cout<< "  Enter your full name "<<endl;
  cin>> name;
  system("cls");
 cout << "   Check Wallet Name & Next of Kin "<< endl;
cout << "  Wallet Name: " << name << endl;
cout << "  You don't have a Next of Kin! "<< endl;
                    }

    void harsh(){
cout << " 8) Reversals "<< endl;
cout << "  9) Check Wallet Limits "<< endl;
cout << "  10) Favorite "<< endl;
cout << "  11) Name & Next of Kin "<< endl;
cout << "  0) Back "<< endl;
 int hop;
cin>> hop;
system("cls");
        switch(hop){
              case 0:
                  menu();
              break;
              case 8:
                  Reversals();
              break;
              case 9:
                  CheckWalletLimits();
              break;
              case 10:
                  favrit();
              break;
              case 11:
                  NameNextofKin();
              break;
                   }
               }

  void MyWallet(){
cout << " My Wallet "<< endl;
cout << "  1) Check Balance "<< endl;
cout << "  2) Allow Cash Out "<< endl;
cout << "  3) My Approvals "<< endl;
cout << "  4) Report Fraud "<< endl;
cout << "  5) Statements "<< endl;
cout << "  6) Change & Reset PIN "<< endl;
cout << "  7) MoMo Promo Checker "<< endl;
cout << "  # for next "<< endl;
char har;
cin>>har;
system("cls");
if ( har == '#') { harsh(); }
else if ( har == '1' ) {CheckBalance(); }
else if ( har == '2' ) { AllowCashOut(); }
else if ( har == '3' ) {MyApprovals(); }
else if ( har == '4' ) {ReportFraud(); }
else if ( har == '5' ) {Statements(); }
else if ( har == '6' ) {ChangeResetPIN(); }
else if ( har == '7' ) {MoMoPromoChecker(); }
else { cout<< " Invalid choice!, "<<endl;
       cout<< " Try Again. "<<endl;
          }
                  }
  void MoMoPromo() {
             int prom;
         cout << " MoMo Promo "<< endl;
         cout << "  1) Check Promo Points "<< endl;
         cout << "  0) Back "<< endl;
          cin>> prom;
          system("cls");
             switch(prom){
                 case 0:
                    menu();
                 break;
                 case 1:
                    MoMoPromoChecker();
                 break;
                 default:
                    cout << "  Invalid Choice! ";
                  break;
                     }
                          }
void Menu() {
    int MenuNum;
  cout << " Menu "<< endl;
    cout << "  1) Transfer Money "<< endl;
    cout << "  2) MoMoPay & Pay Bill "<< endl;
    cout << "  3) Airtime & Bundles "<< endl;
    cout << "  4) Allow Cash Out "<< endl;
    cout << "  5) Financial Services "<< endl;
    cout << "  6) My Wallet "<< endl;
    cout << "  7) MoMo Promo "<< endl;
    cout << "                             " << endl;
  cout << "                             " << endl;
  cout << "                             " << endl;
  cout << " Choose an Option: ";
 cin  >> MenuNum;
 system("cls");
   switch (MenuNum) {
   case 1:
    TransferMoney();
    break;
   case 2:
   MoMoPayPayBill();
    break;
   case 3:
       AirtimeBundles();
    break;
   case 4:
       AllowCashOut();
    break;
   case 5:
       FinancialServices();
    break;
   case 6:
       MyWallet();
    break;
   case 7:
       MoMoPromo();
    break;
   default:
    cout << " Invalid choice ";
    break;

                    }
            }

void MTNuSSD() {
 string UssdNum = "*170#";
string EntUssdNum;

 cout << "  Y'ello !!  Welcome To MTN MoMo! " << endl;
 cout << " Kindly Dial *170# to Access Your MoMo Account ";
 cout << "                             " << endl;
 cout << "                             " << endl;
 cout << "                             " << endl;
 cout << "                             " << endl;
 cout << "                             " << endl;
 cout << "                             " << endl;
 cout << "                             " << endl;
 cout << "                             " << endl;
 cout << "                             " << endl;
 cout << "                             " << endl;
 cout << "                             " << endl;
 cout << "                             " << endl;
 cout << " Enter USSD Code here: ";
 do {
 cin  >> EntUssdNum;
 system("cls");


        if (UssdNum == EntUssdNum) {Menu();}
        else {
 cout << " Unknown Application ! "<< endl;
 cout << "                             " << endl;
 cout << "                             " << endl;
 cout << "                             " << endl;
 cout << "                             " << endl;
 cout << "                             " << endl;
 cout << "                             " << endl;
 cout << "                             " << endl;
 cout << "                             " << endl;
 cout << "                             " << endl;
 cout << "                             " << endl;
 cout << "                             " << endl;

cout << " Please Enter The Code Again: ";
              }

        } while (UssdNum != EntUssdNum);
               }


int main() {

 MTNuSSD();



return 0;

}


