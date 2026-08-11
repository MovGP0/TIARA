/* Ghidra address: 00545d30 */
/* Ghidra symbol: FUN_00545d30 */


/* WARNING: Removing unreachable block (ram,0x00545d5c) */

void FUN_00545d30(void)

{
  int iVar1;
  bool bVar2;
  undefined8 local_10;
  
  LOCK();
  iVar1 = DAT_02011678 + -1;
  UNLOCK();
  bVar2 = DAT_02011678 == 1;
  DAT_02011678 = iVar1;
  if (bVar2) {
    local_10 = DAT_02011680;
    LOCK();
    DAT_02011680 = 0;
    UNLOCK();
    FUN_0041b800(&local_10);
  }
  return;
}

