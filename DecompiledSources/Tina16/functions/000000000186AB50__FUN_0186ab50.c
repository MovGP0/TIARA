/* Ghidra address: 0186ab50 */
/* Ghidra symbol: FUN_0186ab50 */


void FUN_0186ab50(longlong param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  longlong local_50;
  longlong local_48;
  int local_40;
  
  local_50 = FUN_0186a830(&DAT_0186a400,1);
  FUN_00427a20(&DAT_02110388,local_50);
  uVar2 = FUN_00427ab0();
  FUN_00427a10(PTR_DAT_020050d8,uVar2);
  thunk_FUN_039b8e11(DAT_02110398);
  do {
    do {
      while( true ) {
        if ((*(char *)(param_1 + 0x1a) != '\0') || (*(longlong *)(local_50 + 0x10) == 0))
        goto code_r0x0186ac73;
        iVar3 = thunk_FUN_04166556(&local_48,0,0,0,0);
        if (iVar3 != 0) break;
        if (*(char *)(param_1 + 0x1a) == '\0') {
          thunk_FUN_0414c9e5();
        }
      }
      if (local_48 == 0) {
LAB_0186abde:
        bVar1 = true;
      }
      else {
        iVar3 = thunk_FUN_039bb6fb(local_48);
        if (iVar3 != 0) goto LAB_0186abde;
        bVar1 = false;
      }
      if (bVar1) {
        iVar3 = thunk_FUN_04166556(&local_48);
      }
      else {
        iVar3 = thunk_FUN_0419023c(&local_48);
      }
    } while (iVar3 == 0);
    if (local_40 == 0x12) {
code_r0x0186ac73:
      FUN_00427a20(&DAT_02110388,0);
      FUN_00452320(&local_50);
      return;
    }
    thunk_FUN_040cea4c(&local_48);
    if (bVar1) {
      thunk_FUN_040da573(&local_48);
    }
    else {
      thunk_FUN_03e4a4db(&local_48);
    }
  } while( true );
}

