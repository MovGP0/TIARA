/* Ghidra address: 014fe260 */
/* Ghidra symbol: FUN_014fe260 */


int FUN_014fe260(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 local_res8 [4];
  int local_1c;
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_01cc5c60(*(undefined8 *)PTR_DAT_02001440);
  local_1c = 0;
  lVar3 = FUN_01cc5cc0(*(undefined8 *)PTR_DAT_02001440);
  do {
    cVar1 = FUN_004113d0(lVar3,&PTR_FUN_01cb46a8);
    if (cVar1 != '\0') {
      iVar2 = FUN_00416db0(*(undefined8 *)(lVar3 + 0x58),local_res8[0]);
      if (iVar2 == 0) {
        FUN_00414480(local_res8);
        return local_1c;
      }
    }
    lVar3 = FUN_01cc5cc0(*(undefined8 *)PTR_DAT_02001440);
    local_1c = local_1c + 1;
  } while( true );
}

