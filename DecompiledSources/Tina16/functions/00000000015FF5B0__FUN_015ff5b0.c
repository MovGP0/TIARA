/* Ghidra address: 015ff5b0 */
/* Ghidra symbol: FUN_015ff5b0 */


undefined1 FUN_015ff5b0(void)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 local_10;
  
  local_10 = 0;
  if (PTR_DAT_020030c0[0xd] != '\0') {
    cVar1 = FUN_015fede0(&local_10);
    if (cVar1 != '\0') {
      uVar2 = 1;
      goto LAB_015ff5e1;
    }
  }
  uVar2 = 0;
LAB_015ff5e1:
  FUN_00414480(&local_10);
  return uVar2;
}

