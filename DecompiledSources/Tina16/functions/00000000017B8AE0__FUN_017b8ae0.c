/* Ghidra address: 017b8ae0 */
/* Ghidra symbol: FUN_017b8ae0 */


undefined1 FUN_017b8ae0(longlong param_1,undefined8 *param_2,undefined8 param_3,ushort param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  undefined1 local_21;
  undefined8 *local_20 [2];
  undefined8 local_10;
  
  local_20[0] = (undefined8 *)0x0;
  local_10 = 0;
  local_21 = 0;
  iVar2 = FUN_01d31a40(*param_2);
  if (iVar2 == 0) {
    cVar1 = FUN_01cf0620(param_1,param_2,0,0,0xffffffff);
    if (cVar1 == '\0') {
      if (0x10 < param_4) {
        FUN_01d312f0(*param_2,&local_10);
        uVar3 = FUN_00414480(param_1 + 0x60);
        FUN_01b24160(local_20,local_10,uVar3);
        FUN_00414ad0(param_1 + 0x58,local_20[0]);
      }
      uVar3 = FUN_00410e60(&PTR_FUN_00472dd0,1);
      *(undefined8 *)(param_1 + 0x40) = uVar3;
      FUN_00c3c330(*param_2,uVar3);
      if (0 < *(int *)(*(longlong *)(param_1 + 0x40) + 0x10)) {
        puVar4 = (undefined2 *)FUN_004aeac0(*(longlong *)(param_1 + 0x40),0);
        *(undefined2 *)(param_1 + 0x38) = *puVar4;
        FUN_00410f20(*(undefined8 *)(param_1 + 0x48));
        *(undefined8 *)(param_1 + 0x48) = 0;
      }
    }
    else {
      local_21 = 1;
    }
  }
  else {
    local_21 = 1;
  }
  FUN_00414480(local_20);
  FUN_00414480(&local_10);
  return local_21;
}

