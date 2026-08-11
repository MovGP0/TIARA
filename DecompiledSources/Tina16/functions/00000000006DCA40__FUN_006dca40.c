/* Ghidra address: 006dca40 */
/* Ghidra symbol: FUN_006dca40 */


bool FUN_006dca40(longlong param_1,byte param_2)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined4 local_50 [2];
  undefined8 local_48;
  uint local_40;
  
  bVar3 = false;
  if (*(char *)(param_1 + 0x38) == '\0') {
    local_50[0] = 8;
    local_48 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = FUN_006dc7a0();
    iVar1 = thunk_FUN_041b2403(uVar2,0x113e,0,local_50);
    if (iVar1 != 0) {
      if (param_2 < 3) {
        if (param_2 == 2) {
          bVar3 = (local_40 & 1) != 0;
        }
        else if (param_2 == 0) {
          bVar3 = (local_40 & 4) != 0;
        }
        else if (param_2 == 1) {
          bVar3 = (local_40 & 8) != 0;
        }
      }
      else if (param_2 == 3) {
        bVar3 = (local_40 & 2) != 0;
      }
      else {
        bVar3 = false;
        if (param_2 == 4) {
          bVar3 = (local_40 & 0x20) != 0;
        }
      }
    }
  }
  return bVar3;
}

