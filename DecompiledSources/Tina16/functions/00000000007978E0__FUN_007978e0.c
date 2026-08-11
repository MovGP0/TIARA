/* Ghidra address: 007978e0 */
/* Ghidra symbol: FUN_007978e0 */


longlong FUN_007978e0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  FUN_00414ad0(param_2,*(undefined8 *)
                        (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 8 +
                        (longlong)*(int *)(param_1 + 0x10) * 0x20));
  puVar1 = (undefined8 *)
           (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x10 +
           (longlong)*(int *)(param_1 + 0x10) * 0x20);
  *(undefined8 *)(param_2 + 8) = *puVar1;
  *(undefined8 *)(param_2 + 0x10) = puVar1[1];
  return param_2;
}

