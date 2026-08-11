/* Ghidra address: 00fb69a0 */
/* Ghidra symbol: FUN_00fb69a0 */


void FUN_00fb69a0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  FUN_0043e130(local_20,*(undefined8 *)(param_1 + 0xd70));
  iVar1 = FUN_004170c0(L"ATTINY",local_20[0],1);
  if (iVar1 == 0) {
    FUN_0043e130(&local_28,*(undefined8 *)(param_1 + 0xd70));
    iVar1 = FUN_004170c0(L"ATMEGA",local_28,1);
    if (iVar1 == 0) {
      FUN_0043e130(&local_30,*(undefined8 *)(param_1 + 0xd70));
      iVar1 = FUN_004170c0(&LAB_00fb6c00,local_30,1);
      if (iVar1 == 0) {
        uVar2 = (**(code **)(**(longlong **)(param_1 + 2000) + 0x260))
                          (*(longlong **)(param_1 + 2000));
        (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x268))
                  (*(longlong **)(param_1 + 0x6e0),uVar2);
        iVar1 = (**(code **)(**(longlong **)(param_1 + 2000) + 0x260))
                          (*(longlong **)(param_1 + 2000));
        if (iVar1 == 1) {
          *(undefined4 *)(param_1 + 0x818) = 0x100;
        }
        else if (iVar1 == 2) {
          *(undefined4 *)(param_1 + 0x818) = 0x200;
        }
        else if (iVar1 == 3) {
          *(undefined4 *)(param_1 + 0x818) = 0x400;
        }
        else {
          *(undefined4 *)(param_1 + 0x818) = 0x100;
        }
        iVar1 = (**(code **)(**(longlong **)(param_1 + 2000) + 0x260))
                          (*(longlong **)(param_1 + 2000));
        *(double *)(param_1 + 0xc10) = (double)*(int *)(param_1 + 0x840 + (longlong)iVar1 * 4);
        FUN_00fb7bc0(param_1,param_2);
        goto code_r0x00fb6b7e;
      }
    }
    uVar3 = FUN_00b90090(*(undefined8 *)(param_1 + 0x778));
    *(undefined8 *)(param_1 + 0xc10) = uVar3;
    FUN_00fb7bc0(param_1,param_2);
  }
  else {
    uVar3 = FUN_00b90090(*(undefined8 *)(param_1 + 0x778));
    *(undefined8 *)(param_1 + 0xc10) = uVar3;
    FUN_00fb7bc0(param_1,param_2);
  }
code_r0x00fb6b7e:
  FUN_00414560(&local_30,3);
  return;
}

