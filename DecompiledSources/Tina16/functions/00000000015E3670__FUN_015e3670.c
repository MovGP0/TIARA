/* Ghidra address: 015e3670 */
/* Ghidra symbol: FUN_015e3670 */


void FUN_015e3670(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  int local_24;
  longlong local_20 [2];
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + -0x20))(*(longlong **)(param_1 + 0x10));
  }
  uVar1 = FUN_01596170(&DAT_01595c18,CONCAT71((int7)((ulonglong)param_3 >> 8),1) & 0xffffffff,
                       *(undefined8 *)(param_1 + 0x1b8),*(undefined8 *)(param_1 + 0x1a8),
                       *(ushort *)(param_1 + 0x188) / 2,1000);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  FUN_015962e0(*(undefined8 *)(param_1 + 0x10),(uint)*(ushort *)(param_1 + 0x188) * 2 + 2,local_20);
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FUN_004095f0(*(undefined8 *)(param_1 + 0x198));
  }
  uVar1 = FUN_004095c0(*(undefined2 *)(param_1 + 0x188));
  *(undefined8 *)(param_1 + 0x198) = uVar1;
  if (*(longlong *)(param_1 + 400) != 0) {
    FUN_004095f0(*(undefined8 *)(param_1 + 400));
  }
  uVar1 = FUN_004095c0(*(undefined2 *)(param_1 + 0x188));
  *(undefined8 *)(param_1 + 400) = uVar1;
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FUN_004095f0(*(undefined8 *)(param_1 + 0x1a0));
  }
  uVar1 = FUN_004095c0(2);
  *(undefined8 *)(param_1 + 0x1a0) = uVar1;
  uVar2 = (uint)*(ushort *)(param_1 + 0x188);
  local_24 = 0;
  if (-1 < (int)(uVar2 - 1)) {
    do {
      *(undefined1 *)(*(longlong *)(param_1 + 0x198) + (longlong)local_24) =
           *(undefined1 *)(local_20[0] + local_24);
      *(undefined1 *)(*(longlong *)(param_1 + 400) + (longlong)local_24) =
           *(undefined1 *)(local_20[0] + (int)(local_24 + (uint)*(ushort *)(param_1 + 0x188)));
      local_24 = local_24 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  FUN_015947e0(param_1 + 0x18,*(undefined8 *)(param_1 + 0x178),*(undefined8 *)(param_1 + 400),
               *(undefined2 *)(param_1 + 0x188));
  if (*(longlong *)(param_1 + 0x180) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x180) + -0x20))(*(longlong **)(param_1 + 0x180),1);
  }
  uVar1 = FUN_015adfa0(&PTR_FUN_015ad240,1,param_1 + 0x198,*(undefined2 *)(param_1 + 0x188));
  *(undefined8 *)(param_1 + 0x180) = uVar1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x180) + 0x28) = 4;
  **(undefined1 **)(param_1 + 0x1a0) =
       *(undefined1 *)(local_20[0] + (ulonglong)((uint)*(ushort *)(param_1 + 0x188) * 2));
  *(undefined1 *)(*(longlong *)(param_1 + 0x1a0) + 1) =
       *(undefined1 *)(local_20[0] + (ulonglong)((uint)*(ushort *)(param_1 + 0x188) * 2 + 1));
  FUN_004095f0(local_20[0]);
  return;
}

