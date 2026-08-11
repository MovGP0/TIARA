/* Ghidra address: 004da510 */
/* Ghidra symbol: FUN_004da510 */


void FUN_004da510(undefined8 *param_1,undefined4 *param_2,int param_3,undefined8 param_4)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  undefined8 local_60 [2];
  undefined8 local_50;
  longlong *local_48;
  longlong *local_40 [2];
  
  local_60[0] = 0;
  local_40[0] = (longlong *)0x0;
  local_48 = (longlong *)0x0;
  local_50 = 0;
  uVar4 = FUN_0041b800(&local_50);
  cVar2 = FUN_00452340(param_4,&DAT_004da828,uVar4);
  if (cVar2 == '\0') {
    FUN_0044d710(&PTR_FUN_00485650,1,PTR_PTR_02004188);
    FUN_004134c0();
  }
  if (-1 < param_3) {
    param_3 = param_3 + 1;
    do {
      cVar2 = (**(code **)*param_1)(param_1,*param_2);
      if (cVar2 == '\0') {
        uVar4 = FUN_0044d710(&PTR_FUN_00485650,1,PTR_PTR_02001a38);
        FUN_004134c0(uVar4);
      }
      uVar1 = *param_2;
      uVar4 = FUN_0041b800(local_40);
      cVar2 = FUN_004e3210(param_1[1],uVar1,uVar4);
      if (cVar2 == '\0') {
        lVar5 = FUN_004afee0(&DAT_00474160,1);
        if (lVar5 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = lVar5 + 0x20;
        }
        FUN_0041b840(local_40,lVar5);
        FUN_004e2f30(param_1[1],uVar1,local_40[0]);
      }
      else {
        cVar2 = FUN_00452430(param_4,&DAT_004da838);
        if (cVar2 != '\0') {
          uVar4 = FUN_0041b800(&local_48);
          cVar2 = FUN_00452340(param_4,&DAT_004da848,uVar4);
          if ((cVar2 == '\0') || (cVar2 = (**(code **)(*local_48 + 0x78))(local_48), cVar2 == '\0'))
          {
            uVar4 = FUN_0041b800(&local_48);
            cVar2 = FUN_00452340(param_4,&DAT_004da848,uVar4);
            if ((cVar2 == '\0') ||
               (cVar2 = (**(code **)(*local_48 + 0x78))(local_48), cVar2 != '\0')) {
              uVar4 = FUN_0044d710(&PTR_FUN_00485650,1,PTR_PTR_020044d8);
              FUN_004134c0(uVar4);
            }
            else {
              iVar3 = (**(code **)(*local_40[0] + 0x28))();
              iVar6 = 0;
              if (-1 < iVar3 + -1) {
                do {
                  (**(code **)(*local_40[0] + 0x18))(local_40[0],local_60,iVar6);
                  uVar4 = FUN_0041b800(&local_48);
                  cVar2 = FUN_00452340(local_60[0],&DAT_004da848,uVar4);
                  if ((cVar2 != '\0') &&
                     (cVar2 = (**(code **)(*local_48 + 0x78))(local_48), cVar2 == '\0')) {
                    uVar4 = FUN_0044d710(&PTR_FUN_00485650,1,PTR_PTR_020044d8);
                    FUN_004134c0(uVar4);
                  }
                  iVar6 = iVar6 + 1;
                  iVar3 = iVar3 + -1;
                } while (iVar3 != 0);
              }
            }
          }
        }
      }
      (**(code **)(*local_40[0] + 0x70))(local_40[0],param_4);
      if (param_1[3] != 0) {
        (**(code **)(*(longlong *)param_1[3] + 0x18))((longlong *)param_1[3],*param_2,local_50);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  FUN_0041b800(local_60);
  FUN_0041b800(&local_50);
  FUN_0041b800(&local_48);
  FUN_0041b800(local_40);
  return;
}

