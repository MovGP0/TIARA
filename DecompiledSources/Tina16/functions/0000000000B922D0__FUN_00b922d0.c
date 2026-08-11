/* Ghidra address: 00b922d0 */
/* Ghidra symbol: FUN_00b922d0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b922d0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  if (DAT_01e94bb0 != '\0') {
    *PTR_DAT_02002ce0 = 1;
    *(undefined4 *)PTR_DAT_02004650 = 0xfffffffe;
  }
  cVar1 = *PTR_DAT_02002ce0;
  while (cVar1 == '\0') {
    FUN_0040e200(param_1,param_2);
    FUN_0040e480(param_1);
    FUN_00409900();
    FUN_00b04800();
    _DAT_02019914 = _DAT_02019914 + 1;
    FUN_004169a0(local_20,&DAT_02019924);
    iVar2 = FUN_00416db0(*param_2,local_20[0]);
    DAT_01e94bb0 = iVar2 == 0;
    if ((*PTR_DAT_02002ce0 != '\0') ||
       (((*param_2 != 0 && (*(short *)*param_2 != 0x2a)) &&
        (FUN_00b90780(&local_28,*param_2), local_28 != 0)))) break;
    cVar1 = FUN_0040d1c0(param_1);
    FUN_00409900();
  }
  FUN_00414560(&local_28,2);
  return;
}

