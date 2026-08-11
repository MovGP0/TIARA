/* Ghidra address: 019a7ea0 */
/* Ghidra symbol: FUN_019a7ea0 */


char FUN_019a7ea0(undefined8 param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  char local_29;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  iVar4 = 0;
  local_29 = '\0';
  do {
    if ((*(int *)(param_2 + 0x10) <= iVar4) || (local_29 != '\0')) {
      FUN_00414560(&local_28,2);
      return local_29;
    }
    lVar3 = FUN_00b94e60(param_2,iVar4);
    cVar1 = FUN_0198a580(lVar3);
    if ((cVar1 == '\x05') && ((lVar3 != param_3 && (*(char *)(param_3 + 0x2d8) != '\0')))) {
      FUN_004169a0(&local_20,lVar3 + 0x2d8);
      FUN_004169a0(&local_28,param_3 + 0x2d8);
      iVar2 = FUN_0043e420(local_20,local_28);
      if (iVar2 != 0) goto LAB_019a7f32;
      local_29 = '\x01';
    }
    else {
LAB_019a7f32:
      local_29 = '\0';
    }
    iVar4 = iVar4 + 1;
  } while( true );
}

