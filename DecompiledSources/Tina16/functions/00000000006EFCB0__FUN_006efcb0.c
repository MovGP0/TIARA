/* Ghidra address: 006efcb0 */
/* Ghidra symbol: FUN_006efcb0 */


undefined8 FUN_006efcb0(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined8 local_58;
  
  lVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 8));
  uVar3 = 0;
  if (lVar2 != 0) {
    local_7c = param_2;
    if (*(char *)(*(longlong *)(param_1 + 8) + 0x510) == '\0') {
      local_80 = 4;
      local_78 = 0;
      uVar4 = FUN_006efc90(param_1);
      iVar1 = thunk_FUN_041b2403(uVar4,0x104b,0,&local_80);
      if (iVar1 != 0) {
        uVar3 = local_58;
      }
    }
    else {
      FUN_0040d200(&local_80,0x58,0);
      local_80 = 0;
      local_78 = 0;
      uVar3 = FUN_006f3cc0(*(undefined8 *)(param_1 + 8),&local_80);
    }
  }
  return uVar3;
}

