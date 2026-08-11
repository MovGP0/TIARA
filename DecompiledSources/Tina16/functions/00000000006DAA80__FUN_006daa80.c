/* Ghidra address: 006daa80 */
/* Ghidra symbol: FUN_006daa80 */


void FUN_006daa80(longlong param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_48;
  if ((*(ushort *)(param_1 + 0x34) & 1) == 0) {
    puVar1 = auStack_48;
    if ((*(uint *)(param_1 + 0xa4) & 0x2000) != 0) {
      puVar1 = auStack_48;
      if (*(longlong *)(param_1 + 0x498) == 0) {
        uVar2 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
        *(undefined8 *)(param_1 + 0x498) = uVar2;
        puVar1 = local_20;
      }
      local_20 = puVar1;
      local_10 = FUN_004baeb0(&PTR_FUN_004812f0,1,*(undefined8 *)(param_1 + 0x498),0x400);
      FUN_004c48b0(local_10,*(undefined8 *)(param_1 + 0x490));
      FUN_00410f20(local_10);
      FUN_004b6dc0(*(undefined8 *)(param_1 + 0x498),0);
      puVar1 = local_20;
    }
    local_20 = puVar1;
    FUN_00655750(param_1);
  }
  return;
}

