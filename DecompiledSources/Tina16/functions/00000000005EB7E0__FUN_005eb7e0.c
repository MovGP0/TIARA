/* Ghidra address: 005eb7e0 */
/* Ghidra symbol: FUN_005eb7e0 */


undefined8 * FUN_005eb7e0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_20;
  longlong local_18;
  char local_10 [4];
  int local_c;
  
  local_20 = 0;
  local_18 = 0;
  FUN_00414480(param_2);
  cVar1 = FUN_005eb550(param_1,param_3,local_10);
  if ((cVar1 == '\0') || (local_c < 1)) goto code_r0x005eb99c;
  if ((byte)(local_10[0] - 1U) != 0xff) {
    if ((byte)(local_10[0] - 1U) < 2) {
      FUN_00414740(param_2,0,local_c);
      uVar3 = FUN_00416740(*param_2);
      FUN_005ebde0(param_1,param_3,uVar3,local_c,local_10);
      uVar3 = FUN_00416740(*param_2);
      uVar2 = FUN_00414d00(uVar3);
      FUN_004169f0(param_2,uVar2);
      goto code_r0x005eb99c;
    }
    if (local_10[0] == '\x03') {
      if (param_4 == '\0') {
        uVar2 = FUN_005eba50(param_1,param_3);
        FUN_0043f750(param_2,uVar2);
      }
      else {
        uVar2 = FUN_005eba50(param_1,param_3);
        FUN_0043fba0(&local_20,uVar2,8);
        FUN_00416ba0(param_2,L"dword:",local_20);
      }
      goto code_r0x005eb99c;
    }
    if (local_10[0] != '\x04') goto code_r0x005eb99c;
  }
  FUN_00419260(&local_18,&DAT_005eb790,1,(longlong)local_c);
  FUN_005ebcb0(param_1,param_3,local_18,local_c);
  if (param_4 == '\0') {
    lVar4 = 0;
    if (local_18 != 0) {
      lVar4 = *(longlong *)(local_18 + -8);
    }
    FUN_005ea280(param_2,local_18,lVar4 + -1,0);
  }
  else {
    lVar4 = 0;
    if (local_18 != 0) {
      lVar4 = *(longlong *)(local_18 + -8);
    }
    FUN_005ea280(param_2,local_18,lVar4 + -1,L"hex:");
  }
code_r0x005eb99c:
  FUN_00414480(&local_20);
  FUN_00419430(&local_18,&DAT_005eb790);
  return param_2;
}

