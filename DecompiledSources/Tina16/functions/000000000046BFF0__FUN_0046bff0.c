/* Ghidra address: 0046bff0 */
/* Ghidra symbol: FUN_0046bff0 */


undefined8 * FUN_0046bff0(undefined8 *param_1,ushort param_2)

{
  char cVar1;
  ushort uVar2;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 *local_20 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  uVar2 = param_2 & 0xfff;
  if (uVar2 < 0x16) {
    FUN_00414ad0(param_1,(&PTR_u_Empty_01dc4750)[uVar2]);
  }
  else if (param_2 == 0x100) {
    FUN_00414ad0(param_1,L"String");
  }
  else if (param_2 == 0x102) {
    FUN_00414ad0(param_1,L"UnicodeString");
  }
  else if (param_2 == 0x101) {
    FUN_00414ad0(param_1,&DAT_0046c1dc);
  }
  else {
    cVar1 = FUN_0046eed0(param_2,local_20);
    if (cVar1 == '\0') {
      FUN_0043fba0(&local_38,uVar2,4);
      FUN_00416ba0(param_1,*(undefined8 *)PTR_PTR_02005288,local_38);
    }
    else {
      FUN_00410ae0(*local_20[0],local_30);
      FUN_00416dc0(param_1,local_30[0],2,0x7fffffff);
    }
  }
  if ((param_2 & 0x2000) != 0) {
    FUN_00416ba0(param_1,L"Array ",*param_1);
  }
  if ((param_2 & 0x4000) != 0) {
    FUN_00416ba0(param_1,L"ByRef ",*param_1);
  }
  FUN_00414560(&local_38,2);
  return param_1;
}

