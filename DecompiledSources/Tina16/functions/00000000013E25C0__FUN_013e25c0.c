/* Ghidra address: 013e25c0 */
/* Ghidra symbol: FUN_013e25c0 */


void FUN_013e25c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_res8 [4];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_30 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  local_20 = FUN_00498310(0,0);
  uVar1 = FUN_01acd9b0(&PTR_FUN_01ac9770,1,*(undefined8 *)PTR_DAT_02001e00,0,
                       *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),&local_20);
  *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798) = uVar1;
  FUN_0043f750(&local_30,DAT_01f45484);
  FUN_00416ba0(&local_28,local_res8[0],local_30);
  FUN_01cec150(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),uVar1,local_28,
               *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
  DAT_01f45484 = DAT_01f45484 + 1;
  FUN_00414560(&local_30,2);
  FUN_00414480(local_res8);
  return;
}

