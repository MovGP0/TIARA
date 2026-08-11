/* Ghidra address: 0085d640 */
/* Ghidra symbol: FUN_0085d640 */


void FUN_0085d640(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char local_19;
  
  if ((*(longlong *)(param_1 + 0x6b0) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x6b0) + 0x70) != 0)) {
    local_19 = '\x01';
    lVar1 = *(longlong *)(param_1 + 0x6b0);
    (**(code **)(lVar1 + 0x70))
              (*(undefined8 *)(lVar1 + 0x78),lVar1,*(undefined4 *)(param_2 + 0x4f0),&local_19);
    if (local_19 == '\0') {
      *(undefined4 *)(param_1 + 0x508) = 0;
    }
  }
  return;
}

