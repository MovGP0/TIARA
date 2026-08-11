/* Ghidra address: 00af9150 */
/* Ghidra symbol: FUN_00af9150 */


undefined1 FUN_00af9150(longlong param_1,longlong param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_21;
  undefined8 local_20 [2];
  
  local_40 = auStack_68;
  local_48 = 0;
  local_30 = 0;
  local_20[0] = 0;
  bVar1 = *(byte *)(param_2 + 1);
  if (bVar1 < 7) {
    if (bVar1 == 6) {
      local_40 = auStack_68;
      uVar2 = FUN_00807f70(*(undefined8 *)PTR_DAT_02005950);
      uVar3 = FUN_00807f70(*(undefined8 *)PTR_DAT_02005950);
      local_21 = FUN_00af9050(auStack_68,uVar2,uVar3);
      goto code_r0x00af93b5;
    }
    if (bVar1 == 1) {
      uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x98);
      local_40 = auStack_68;
      local_21 = FUN_00af9050(auStack_68,uVar2,uVar2);
      goto code_r0x00af93b5;
    }
    if (bVar1 == 2) {
      uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x9c);
      local_40 = auStack_68;
      local_21 = FUN_00af9050(auStack_68,uVar2,uVar2);
      goto code_r0x00af93b5;
    }
    if (bVar1 == 3) {
      local_40 = auStack_68;
      FUN_00414480(local_20);
      FUN_00467e90(&local_48,param_2 + 8);
      local_38 = local_48;
      FUN_0043e600(local_20,local_48);
      FUN_00414b50(&local_30,local_20[0]);
      FUN_00414480(local_20);
      iVar4 = FUN_00416db0(local_30,L"landscape");
      if (iVar4 == 0) {
        local_21 = *(int *)(*(longlong *)(param_1 + 0x50) + 0x9c) <
                   *(int *)(*(longlong *)(param_1 + 0x50) + 0x98);
      }
      else {
        iVar4 = FUN_00416db0(local_30,L"portrait");
        if (iVar4 == 0) {
          local_21 = *(int *)(*(longlong *)(param_1 + 0x50) + 0x98) <=
                     *(int *)(*(longlong *)(param_1 + 0x50) + 0x9c);
        }
        else {
          local_21 = 0;
        }
      }
      goto code_r0x00af93b5;
    }
    if (bVar1 == 5) {
      local_40 = auStack_68;
      uVar2 = FUN_00807f90(*(undefined8 *)PTR_DAT_02005950);
      uVar3 = FUN_00807f90(*(undefined8 *)PTR_DAT_02005950);
      local_21 = FUN_00af9050(auStack_68,uVar2,uVar3);
      goto code_r0x00af93b5;
    }
LAB_00af93b0:
    local_21 = 0;
    local_40 = auStack_68;
  }
  else {
    if (bVar1 != 8) {
      if (bVar1 == 9) {
        local_21 = FUN_00af8f90(auStack_68,0,0x7fffffff);
        goto code_r0x00af93b5;
      }
      if (bVar1 != 10) {
        if (bVar1 == 0xd) {
          local_40 = auStack_68;
          local_21 = FUN_00af8f90(auStack_68,0,1);
          goto code_r0x00af93b5;
        }
        goto LAB_00af93b0;
      }
    }
    local_40 = auStack_68;
    local_21 = FUN_00af8f90(auStack_68,8,0x7fffffff);
  }
code_r0x00af93b5:
  FUN_00414480(&local_48);
  FUN_00414480(&local_30);
  FUN_00414480(local_20);
  return local_21;
}

