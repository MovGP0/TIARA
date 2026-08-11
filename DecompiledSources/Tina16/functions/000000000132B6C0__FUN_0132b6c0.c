/* Ghidra address: 0132b6c0 */
/* Ghidra symbol: FUN_0132b6c0 */


void FUN_0132b6c0(longlong param_1,undefined8 *param_2)

{
  ushort uVar1;
  int iVar2;
  double dVar3;
  undefined8 local_30 [2];
  int local_1c [3];
  
  local_30[0] = 0;
  uVar1 = *(ushort *)*param_2;
  if (uVar1 < 0x33) {
    if (uVar1 == 0x32) {
      FUN_0082a6c0(*(longlong *)(param_1 + 0x6e8),
                   *(char *)(*(longlong *)(param_1 + 0x6e8) + 0x328) == '\0');
      FUN_0132b500(param_1,0);
    }
    else if (uVar1 == 0x30) {
      FUN_0082a6c0(*(longlong *)(param_1 + 0x6d8),
                   *(char *)(*(longlong *)(param_1 + 0x6d8) + 0x328) == '\0');
      FUN_0132b2d0(param_1,0);
    }
    else if (uVar1 == 0x31) {
      FUN_0082a6c0(*(longlong *)(param_1 + 0x6e0),
                   *(char *)(*(longlong *)(param_1 + 0x6e0) + 0x328) == '\0');
      FUN_0132b400(param_1,0);
    }
  }
  else if (uVar1 == 0x33) {
    FUN_0082a6c0(*(longlong *)(param_1 + 0x6f0),
                 *(char *)(*(longlong *)(param_1 + 0x6f0) + 0x328) == '\0');
    FUN_0132b070(param_1,0);
  }
  else if (uVar1 == 0x34) {
    FUN_00416dc0(local_30,*param_2,2,0x14);
    iVar2 = FUN_0040e860(local_30[0],local_1c);
    if (local_1c[0] == 0) {
      FUN_0068e980(*(undefined8 *)(param_1 + 0x6c0),iVar2);
      dVar3 = (double)FUN_0040c2f0(0x4024000000000000);
      dVar3 = (double)FUN_0040af80((double)(iVar2 / 9 + -6) * dVar3,(longlong)iVar2 % 9 & 0xffffffff
                                  );
      *(double *)(PTR_DAT_02004010 + 0x7e0) = (double)(iVar2 % 9 + 1) * dVar3;
      FUN_00b90440(*(undefined8 *)(param_1 + 0x6c8),*(undefined8 *)(PTR_DAT_02004010 + 0x7e0));
      FUN_01c88850(*(undefined8 *)(param_1 + 0x708));
      FUN_013a4910(*(undefined8 *)PTR_DAT_020032b8);
    }
  }
  FUN_00414480(local_30);
  return;
}

