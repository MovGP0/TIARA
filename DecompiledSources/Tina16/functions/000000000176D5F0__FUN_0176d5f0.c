/* Ghidra address: 0176d5f0 */
/* Ghidra symbol: FUN_0176d5f0 */


void FUN_0176d5f0(longlong *param_1,longlong param_2,undefined1 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_a8 [32];
  uint local_88;
  undefined1 *local_70;
  undefined2 local_64;
  undefined2 local_62;
  uint local_60;
  undefined1 local_5c [52];
  undefined8 local_28;
  longlong local_20 [2];
  
  local_70 = auStack_a8;
  FUN_00417580(local_5c,&DAT_01d2e6d8);
  if (param_2 == 0) {
    FUN_00b047e0(0xfffffffd);
    goto LAB_0176d809;
  }
  local_28 = FUN_004b9860(&PTR_FUN_0047c498,1,param_2,0x20);
  local_88 = local_88 & 0xffffff00;
  local_20[0] = FUN_01d30b30(&DAT_01d2e8e8,1,local_28,0x40);
  *(undefined1 *)(local_20[0] + 0x7a) = param_3;
  FUN_01d31aa0(local_20[0],param_4);
  if (local_20[0] == 0) {
LAB_0176d7c5:
    if (*(int *)PTR_DAT_02004810 == 0x1001) {
      FUN_00b047e0(0xfffffffd);
    }
    else {
      FUN_00b047e0(*(undefined4 *)PTR_DAT_02004810);
    }
  }
  else {
    iVar2 = FUN_01d31a40(local_20[0]);
    if (iVar2 != 0) goto LAB_0176d7c5;
    FUN_01d317c0(local_20[0],local_5c);
    cVar1 = FUN_0176d510(auStack_a8,local_5c);
    if (cVar1 == '\0') {
      FUN_00b047e0(0xfffffffd);
    }
    else {
      FUN_01d30fd0(local_20[0]);
      uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
      cVar1 = FUN_01d31040(local_20[0],uVar3);
      if (cVar1 != '\0') {
        FUN_01d30e90(local_20[0],&local_64);
        cVar1 = FUN_01cf03d0(local_64,local_62);
        if (cVar1 == '\0') {
          local_88 = local_60;
          (**(code **)(*param_1 + 0x38))(param_1,local_20,local_64,local_62);
        }
        else {
          FUN_00b047e0(0xfffffffd);
        }
      }
      FUN_01d31a40(local_20[0]);
    }
    iVar2 = FUN_01d31a40(local_20[0]);
    if (iVar2 != 0) {
      uVar3 = FUN_01d31a40(local_20[0]);
      FUN_00b047e0(uVar3);
    }
  }
  FUN_00410f20(local_20[0]);
  FUN_00410f20(local_28);
LAB_0176d809:
  FUN_00417740(local_5c,&DAT_01d2e6d8);
  return;
}

