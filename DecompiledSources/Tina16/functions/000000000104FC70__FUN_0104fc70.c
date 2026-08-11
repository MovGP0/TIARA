/* Ghidra address: 0104fc70 */
/* Ghidra symbol: FUN_0104fc70 */


void FUN_0104fc70(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 0x8f8) =
       *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x928) + 0x4c0) + 0x98);
  *(undefined4 *)(param_1 + 0x8fc) =
       *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x928) + 0x4c0) + 0x9c);
  *(double *)(param_1 + 0x8f0) =
       ((double)*(int *)(param_1 + 0x8f8) / (double)*(int *)(param_1 + 0x908)) *
       *(double *)(param_1 + 0x900);
  FUN_00f62ab0(*(undefined8 *)(param_1 + 0x980),*(undefined8 *)(param_1 + 0x8f0));
  FUN_00f62aa0(*(undefined8 *)(param_1 + 0x980),*(undefined8 *)(param_1 + 0x8f0));
  FUN_00f62b00(*(undefined8 *)(param_1 + 0x980),
               *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x928) + 0x4d8) + 0x310));
  FUN_00f653c0(*(undefined8 *)(param_1 + 0x980),
               *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x928) + 0x4d8) + 0x310));
  FUN_00f653d0(*(undefined8 *)(param_1 + 0x980),L"Courier New",7);
  FUN_00f62af0(*(undefined8 *)(param_1 + 0x980),
               *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x928) + 0x4c0) + 0x310));
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x928) + 0x4d8);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x928) + 0x4c0);
  FUN_00f62b10(*(undefined8 *)(param_1 + 0x980),*(undefined4 *)(lVar1 + 0x98),
               *(undefined4 *)(lVar1 + 0x9c),*(undefined4 *)(lVar2 + 0x98),
               *(undefined4 *)(lVar2 + 0x9c),*(undefined4 *)(param_1 + 0x908),
               *(undefined4 *)(param_1 + 0x90c));
  return;
}

