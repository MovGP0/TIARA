/* Ghidra address: 0111f0f0 */
/* Ghidra symbol: FUN_0111f0f0 */


void FUN_0111f0f0(longlong param_1,undefined8 param_2,longlong *param_3,int param_4,int param_5)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_88 [44];
  int local_5c;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined4 local_3c;
  undefined8 local_38;
  longlong local_30 [2];
  
  local_58 = 0;
  local_50[0] = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_5c = param_4;
  if (param_4 <= param_5) {
    iVar5 = (param_5 - param_4) + 1;
    do {
      cVar1 = FUN_0111ee30(auStack_88,param_4,3,1);
      if (cVar1 == '\0') {
        cVar1 = FUN_0111ee30(auStack_88,param_4,4,1);
        if (cVar1 == '\0') {
          cVar1 = FUN_0111ee30(auStack_88,param_4,5,0);
          if (cVar1 == '\0') {
            (**(code **)(*param_3 + 0x18))(param_3,&local_38,param_4);
            FUN_0043eb50(local_30,local_38);
            if (local_30[0] == 0) {
              FUN_00be12f0(param_2,param_4 + 1);
            }
            else {
              cVar1 = FUN_0111ef20(auStack_88,param_4);
              if (cVar1 == '\0') {
                local_3c = FUN_00be1f40(param_1,param_3);
                uVar2 = FUN_0111f0a0(auStack_88);
                cVar1 = FUN_00bc9d40(*(undefined8 *)(param_1 + 0x1e0),local_30[0]);
                if (cVar1 == '\0') {
                  FUN_00be1b60(param_2,param_4 + 1,1,uVar2);
                }
                else {
                  FUN_00bc5600(*(undefined8 *)(param_1 + 0x1e0),local_50,1);
                  iVar3 = FUN_00416db0(local_50[0],L"class");
                  if (iVar3 == 0) {
                    uVar4 = 3;
                  }
                  else {
                    FUN_00bc5600(*(undefined8 *)(param_1 + 0x1e0),&local_58,1);
                    iVar3 = FUN_004170c0(&LAB_0111f364,local_58,1);
                    if (iVar3 < 1) {
                      uVar4 = 1;
                    }
                    else {
                      uVar4 = 4;
                    }
                  }
                  FUN_00be1b30(param_2,param_4 + 1,uVar4,uVar2);
                }
              }
            }
          }
        }
      }
      param_4 = param_4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00414560(&local_58,2);
  FUN_00414560(&local_38,2);
  return;
}

