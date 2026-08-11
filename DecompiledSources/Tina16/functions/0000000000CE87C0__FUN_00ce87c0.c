/* Ghidra address: 00ce87c0 */
/* Ghidra symbol: FUN_00ce87c0 */


void FUN_00ce87c0(longlong param_1)

{
  short sVar1;
  char cVar2;
  int iVar3;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  longlong local_28;
  longlong local_20;
  
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_48 = 0;
  local_50 = 0;
  local_40[0] = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  FUN_0043ea00(&local_20,*(undefined8 *)(param_1 + 0x78));
  do {
    if (local_20 == 0) {
code_r0x00ce8a2a:
      FUN_00414560(&local_70,7);
      FUN_00414560(&local_30,3);
      return;
    }
    iVar3 = FUN_008b0400(&DAT_00ce8a9c,local_20,0xffffffff,1);
    if (iVar3 == 0) {
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x78))(*(longlong **)(param_1 + 0x58),local_20)
      ;
      goto code_r0x00ce8a2a;
    }
    sVar1 = *(short *)(local_20 + -2 + (longlong)iVar3 * 2);
    FUN_00416dc0(local_40,local_20,1,iVar3 + -1);
    FUN_0043eb80(&local_28,local_40[0]);
    FUN_00416dc0(&local_50,local_20,iVar3 + 1,0x7fffffff);
    FUN_0043eb50(&local_48,local_50);
    FUN_00414b50(&local_20,local_48);
    FUN_00414480(&local_30);
    if ((sVar1 != 0x3b) && (local_20 != 0)) {
      cVar2 = FUN_00879090(local_20,&DAT_00ce8ab0);
      if (cVar2 == '\0') {
        FUN_00874ee0(&local_60,&local_20,&DAT_00ce8ac0,1,1);
        FUN_0043ea00(&local_30,local_60);
      }
      else {
        FUN_00879060(&local_20,1,1);
        FUN_00874ee0(&local_30,&local_20,&DAT_00ce8ab0,1,1);
        FUN_00874ee0(&local_58,&local_20,&DAT_00ce8ac0,1,1);
      }
      FUN_0043eb50(&local_68,local_20);
      FUN_00414b50(&local_20,local_68);
    }
    if (local_28 != 0) {
      FUN_00416cd0(&local_70,3,local_28,&LAB_00ce8ad0,local_30);
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x78))(*(longlong **)(param_1 + 0x58),local_70)
      ;
    }
  } while( true );
}

