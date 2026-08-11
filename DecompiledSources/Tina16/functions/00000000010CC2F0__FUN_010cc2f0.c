/* Ghidra address: 010cc2f0 */
/* Ghidra symbol: FUN_010cc2f0 */


void FUN_010cc2f0(double param_1,double param_2,undefined8 param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  double dVar3;
  undefined8 local_188;
  undefined1 local_180 [256];
  undefined8 local_80 [2];
  undefined1 local_69 [89];
  
  local_188 = 0;
  local_80[0] = 0;
  iVar2 = -0x12;
  iVar1 = 1;
  while( true ) {
    if (param_2 - 3.0 < (double)iVar2) break;
    iVar2 = iVar2 + 3;
    iVar1 = iVar1 + 1;
  }
  if (iVar1 == 7) {
    local_69[0] = 0;
  }
  else {
    FUN_00416780(local_80,*(undefined2 *)((longlong)&UNWIND_INFO_01f19ec0 + (longlong)iVar1 * 2 + 2)
                );
    FUN_00416910(local_180,local_80[0],0xff);
    FUN_00415020(local_69,local_180,0x50);
  }
  dVar3 = (double)FUN_0040c2f0(0x4024000000000000);
  dVar3 = (double)FUN_0040af80((param_2 - (double)iVar2) * dVar3);
  FUN_010cbda0(param_1 * dVar3,param_3,param_4);
  FUN_004169a0(&local_188,local_69);
  FUN_00416ad0(param_3,local_188);
  FUN_00414480(&local_188);
  FUN_00414480(local_80);
  return;
}

