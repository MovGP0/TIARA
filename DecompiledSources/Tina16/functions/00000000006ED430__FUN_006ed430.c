/* Ghidra address: 006ed430 */
/* Ghidra symbol: FUN_006ed430 */


void FUN_006ed430(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_18 = FUN_006edb60(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 8));
  cVar1 = FUN_0065be20(local_18);
  if (((cVar1 == '\0') && ((*(ushort *)(local_18 + 0x34) & 3) == 0)) &&
     (*(char *)(local_18 + 0x589) == '\0')) {
    if (*(longlong *)(local_18 + 0x518) == 0) {
      uVar2 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
      *(undefined8 *)(local_18 + 0x518) = uVar2;
    }
    else {
      FUN_004b6e40(*(longlong *)(local_18 + 0x518),0);
    }
    local_10 = FUN_004baeb0(&PTR_FUN_004812f0,1,*(undefined8 *)(local_18 + 0x518),0x400);
    FUN_004c48b0(local_10,*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 8));
    FUN_00410f20(local_10);
    FUN_004b6dc0(*(undefined8 *)(local_18 + 0x518),0);
  }
  return;
}

