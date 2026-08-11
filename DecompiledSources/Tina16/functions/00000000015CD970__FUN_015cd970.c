/* Ghidra address: 015cd970 */
/* Ghidra symbol: FUN_015cd970 */


void FUN_015cd970(undefined8 param_1,longlong param_2)

{
  FUN_00410f20(*(undefined8 *)(param_2 + 0x130));
  if (((*(ushort *)(*(longlong *)(param_2 + 0x208) + 6) < 0x4114) &&
      (*(char *)(param_2 + 0xf7) != '\0')) &&
     ((*(char *)(*(longlong *)(param_2 + 0x208) + 0x4e) == '\x01' ||
      ((*(char *)(*(longlong *)(param_2 + 0x208) + 0x4e) == '\x02' ||
       (*(char *)(*(longlong *)(param_2 + 0x208) + 0x4e) == '\x03')))))) {
    (**(code **)(*(longlong *)**(undefined8 **)(param_2 + 0xe8) + -0x20))
              ((longlong *)**(undefined8 **)(param_2 + 0xe8),1);
    FUN_004095f0(*(undefined8 *)(param_2 + 0xe8));
  }
  return;
}

