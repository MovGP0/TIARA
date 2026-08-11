/* Ghidra address: 01821e60 */
/* Ghidra symbol: FUN_01821e60 */


undefined8 * FUN_01821e60(longlong param_1,undefined8 *param_2)

{
  bool bVar1;
  char cVar2;
  undefined1 auStack_68 [32];
  undefined *local_48;
  undefined8 *local_30;
  undefined8 local_28;
  undefined1 local_19;
  
  local_28 = 0;
  local_30 = param_2;
  FUN_00414480(param_2);
  if (*(char *)(param_1 + 0x99) != '\0') {
    FUN_018210c0(param_1);
  }
  bVar1 = true;
  local_19 = *(undefined1 *)(param_1 + 0xc0);
  do {
    FUN_00414480(&local_28);
    cVar2 = FUN_01821880(auStack_68);
    if (cVar2 == '\0') {
      cVar2 = FUN_01821d50(auStack_68);
      if (cVar2 == '\0') {
        if (!bVar1) {
          local_48 = &DAT_01821f44;
          FUN_00416cd0(local_30,3,&DAT_01821f44,*local_30);
        }
        FUN_00414480(&local_28);
        return local_30;
      }
    }
    FUN_00416ad0(local_30,local_28);
    bVar1 = false;
  } while( true );
}

