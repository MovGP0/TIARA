/* Ghidra address: 00659060 */
/* Ghidra symbol: FUN_00659060 */


undefined1 FUN_00659060(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  char local_29;
  
  local_29 = '\x01';
  if (*(longlong *)(param_1 + 0x418) != 0) {
    (**(code **)(param_1 + 0x418))
              (*(undefined8 *)(param_1 + 0x420),param_1,param_3,param_2,&local_29);
  }
  if ((local_29 != '\0') && (lVar1 = FUN_0064fca0(param_1,0xb039,param_2,param_3), lVar1 == 0)) {
    return 1;
  }
  return 0;
}

