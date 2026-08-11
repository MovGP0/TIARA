/* Ghidra address: 0043d4a0 */
/* Ghidra symbol: FUN_0043d4a0 */


undefined8 FUN_0043d4a0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  undefined8 local_458;
  undefined8 local_450;
  longlong local_448;
  undefined1 local_440 [524];
  short local_234 [266];
  
  local_450 = 0;
  local_458 = 0;
  local_448 = 0;
  iVar1 = thunk_FUN_0416522a(0x104,local_234);
  if (iVar1 < 1) {
code_r0x0043d5b1:
    FUN_00414560(&local_458,3);
    return param_2;
  }
  psVar2 = local_234;
  do {
    psVar2[2] = 0;
    iVar1 = thunk_FUN_03d582bc(psVar2,local_440,0x104);
    if (0 < iVar1) {
      FUN_00416830(&local_448,local_440,0x106);
      iVar1 = FUN_004170c0(local_448,param_3,1);
      if (0 < iVar1) {
        iVar1 = 0;
        if (local_448 != 0) {
          iVar1 = *(int *)(local_448 + -4);
        }
        iVar3 = 0;
        if (param_3 != 0) {
          iVar3 = *(int *)(param_3 + -4);
        }
        FUN_004167d0(&local_450,psVar2);
        FUN_00416dc0(&local_458,param_3,iVar1 + 1,iVar3 - iVar1);
        FUN_00416ba0(param_2,local_450,local_458);
        goto code_r0x0043d5b1;
      }
    }
    for (; *psVar2 != 0; psVar2 = psVar2 + 1) {
    }
    psVar2 = psVar2 + 2;
    if ((psVar2 == (short *)0x0) || (*psVar2 == 0)) goto code_r0x0043d5b1;
  } while( true );
}

