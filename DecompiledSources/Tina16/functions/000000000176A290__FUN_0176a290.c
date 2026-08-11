/* Ghidra address: 0176a290 */
/* Ghidra symbol: FUN_0176a290 */


undefined8 FUN_0176a290(longlong param_1)

{
  longlong lVar1;
  undefined1 local_21;
  undefined8 local_20;
  
  if (*(longlong *)(param_1 + 0x68) == 0) {
    local_20 = FUN_00498310(0,0);
  }
  else {
    local_21 = 0;
    lVar1 = FUN_00c410e0(*(undefined8 *)(param_1 + 0x68),*PTR_DAT_02002480 == '\0',*PTR_DAT_02001560
                         ,&local_21);
    if (lVar1 == 0) {
      lVar1 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x38),0);
      local_20 = FUN_00b95af0(*(undefined4 *)(lVar1 + 0x2c));
    }
    else {
      local_20 = FUN_00b95af0(*(undefined4 *)(lVar1 + 0x2c));
    }
  }
  return local_20;
}

