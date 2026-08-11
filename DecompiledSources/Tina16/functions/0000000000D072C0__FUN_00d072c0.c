/* Ghidra address: 00d072c0 */
/* Ghidra symbol: FUN_00d072c0 */


undefined1 FUN_00d072c0(longlong param_1)

{
  longlong lVar1;
  undefined1 local_19 [9];
  
  local_19[0] = 1;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 8);
  if (*(longlong *)(lVar1 + 0x220) != 0) {
    (**(code **)(lVar1 + 0x220))
              (*(undefined8 *)(lVar1 + 0x228),lVar1,
               *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x18) + 0x18),local_19)
    ;
  }
  return local_19[0];
}

