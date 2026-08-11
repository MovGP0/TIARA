/* Ghidra address: 004bf930 */
/* Ghidra symbol: FUN_004bf930 */


void FUN_004bf930(longlong param_1)

{
  ushort *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_20;
  
  local_30 = auStack_58;
  local_20 = FUN_004c2fe0(*(undefined8 *)(param_1 + 0x180),*(undefined8 *)(param_1 + 0x138));
  *(undefined8 *)(param_1 + 0x150) = 0;
  if (*(longlong *)(*(longlong *)(param_1 + 0x180) + 0xe0) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x180) + 0xe0))
              (*(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0xe8),
               *(undefined8 *)(param_1 + 0x180),local_20,param_1 + 0x150);
  }
  if (*(longlong *)(param_1 + 0x150) == 0) {
    uVar2 = (**(code **)(local_20 + -0x30))(local_20);
    *(undefined8 *)(param_1 + 0x150) = uVar2;
    if ((*(byte *)(param_1 + 0x147) & 4) != 0) {
      puVar1 = (ushort *)(*(longlong *)(param_1 + 0x150) + 0x34);
      *puVar1 = *puVar1 | 1;
      puVar1 = (ushort *)(*(longlong *)(param_1 + 0x150) + 0x34);
      *puVar1 = *puVar1 | 0x200;
    }
    (**(code **)(**(longlong **)(param_1 + 0x150) + 0x78))
              (*(longlong **)(param_1 + 0x150),0xff,
               *(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0x50));
  }
  puVar1 = (ushort *)(*(longlong *)(param_1 + 0x150) + 0x34);
  *puVar1 = *puVar1 | 1;
  return;
}

