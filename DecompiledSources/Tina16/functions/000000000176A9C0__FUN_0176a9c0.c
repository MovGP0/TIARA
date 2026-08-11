/* Ghidra address: 0176a9c0 */
/* Ghidra symbol: FUN_0176a9c0 */


void FUN_0176a9c0(longlong *param_1,longlong param_2,undefined1 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_b8 [32];
  uint local_98;
  undefined1 *local_80;
  undefined2 local_74;
  undefined2 local_72;
  uint local_70;
  undefined1 local_6c [48];
  uint local_3c;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20 [2];
  
  local_80 = auStack_b8;
  local_38 = 0;
  FUN_00417580(local_6c,&DAT_01d2e6d8);
  if (param_2 == 0) {
    FUN_00b047e0(0xfffffffd);
    goto LAB_0176ac8b;
  }
  local_28 = FUN_004b9860(&PTR_FUN_0047c498,1,param_2,0x20);
  local_30 = 0;
  FUN_00414480(&local_38);
  local_98 = local_98 & 0xffffff00;
  local_20[0] = FUN_01d30b30(&DAT_01d2e8e8,1,local_28,0x40);
  *(undefined1 *)(local_20[0] + 0x7a) = param_3;
  FUN_01d31aa0(local_20[0],param_4);
  if (local_20[0] == 0) {
LAB_0176ac00:
    if (*(int *)PTR_DAT_02004810 == 0x1001) {
      FUN_00b047e0(0xfffffffd);
    }
    else {
      FUN_00b047e0(*(undefined4 *)PTR_DAT_02004810);
    }
  }
  else {
    iVar2 = FUN_01d31a40(local_20[0]);
    if (iVar2 != 0) goto LAB_0176ac00;
    FUN_01d317c0(local_20[0],local_6c);
    if ((local_3c & 1) == 0) {
      local_30 = local_28;
    }
    else {
      local_30 = FUN_017688d0(local_28);
      *(longlong *)(local_20[0] + 0x10) = local_30;
    }
    cVar1 = FUN_0176a8d0(auStack_b8,local_6c);
    if (cVar1 == '\0') {
      FUN_00b047e0(0xfffffffd);
    }
    else {
      if ((local_3c & 1) == 0) {
        FUN_01d30fd0(local_20[0]);
      }
      uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
      cVar1 = FUN_01d31040(local_20[0],uVar3);
      if (cVar1 != '\0') {
        FUN_01d30e90(local_20[0],&local_74);
        cVar1 = FUN_01cf03d0(local_74,local_72);
        if (cVar1 == '\0') {
          local_98 = local_70;
          (**(code **)(*param_1 + 0x38))(param_1,local_20,local_74,local_72);
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
  if ((local_28 != local_30) && (local_30 != 0)) {
    FUN_00414b50(&local_38,*(undefined8 *)(local_30 + 0x10));
  }
  FUN_00410f20(local_30);
  if (local_38 != 0) {
    FUN_004412f0(local_38);
  }
LAB_0176ac8b:
  FUN_00417740(local_6c,&DAT_01d2e6d8);
  FUN_00414480(&local_38);
  return;
}

