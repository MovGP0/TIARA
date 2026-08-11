/* Ghidra address: 010db7e0 */
/* Ghidra symbol: FUN_010db7e0 */


byte FUN_010db7e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_18;
  byte local_9;
  
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_1);
  FUN_00414610(local_res10);
  FUN_00414610(local_res18);
  local_18 = 0;
  if (*PTR_DAT_020050d0 == '\0') {
    if (*PTR_DAT_02003450 == '\0') {
      FUN_00e164d0(local_res8,local_res10,local_res18,&local_9);
    }
    if ((local_9 & *PTR_DAT_02003450 == '\0') != 0) {
      cVar1 = FUN_010dba30(1,3,&local_18);
      if (cVar1 != '\0') {
        uVar2 = FUN_010e1810(&PTR_FUN_01133e90,1,*(undefined8 *)PTR_DAT_02004030,0,1,3,0,0,0);
        FUN_010e1710(3,1,0,uVar2,0);
        lVar3 = FUN_010e1630(3,1,0,0);
        FUN_00415020(PTR_u__02004a78,lVar3 + 0x889,0x28);
        *PTR_DAT_020050d0 = 1;
        goto code_r0x010db917;
      }
    }
    FUN_010e1710(3,1,0,0,0);
  }
code_r0x010db917:
  FUN_00414560(&local_res8,3);
  return local_9;
}

