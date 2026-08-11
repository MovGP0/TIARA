/* Ghidra address: 006dd2b0 */
/* Ghidra symbol: FUN_006dd2b0 */


bool FUN_006dd2b0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined4 local_50 [2];
  undefined8 local_48;
  int local_24;
  
  bVar3 = false;
  if (*(char *)(param_1 + 0x38) == '\0') {
    local_50[0] = 0x40;
    local_48 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = FUN_006dc7a0();
    iVar1 = thunk_FUN_041b2403(uVar2,0x113e,0,local_50);
    if (iVar1 != 0) {
      bVar3 = 0 < local_24;
    }
  }
  return bVar3;
}

