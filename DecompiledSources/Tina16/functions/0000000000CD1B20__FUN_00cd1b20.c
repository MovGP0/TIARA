/* Ghidra address: 00cd1b20 */
/* Ghidra symbol: FUN_00cd1b20 */


undefined4 * FUN_00cd1b20(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_2 = 0;
  *(undefined8 *)(param_2 + 2) = 0;
  if (((*(longlong *)PTR_DAT_02001e60 != 0) && (*(longlong *)PTR_DAT_02001a28 != 0)) &&
     (*(longlong *)(param_1 + 0x18) != 0)) {
    lVar1 = (**(code **)PTR_DAT_02001e60)(*(longlong *)(param_1 + 0x18));
    if (lVar1 != 0) {
      uVar2 = (**(code **)PTR_DAT_02001a28)(lVar1,param_2);
      *(undefined8 *)(param_2 + 2) = uVar2;
    }
  }
  return param_2;
}

