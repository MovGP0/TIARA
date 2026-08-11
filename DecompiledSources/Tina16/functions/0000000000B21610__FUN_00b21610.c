/* Ghidra address: 00b21610 */
/* Ghidra symbol: FUN_00b21610 */


undefined1 FUN_00b21610(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 local_59;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  longlong local_28;
  undefined2 local_1f;
  undefined2 local_1d;
  undefined1 local_1b;
  undefined1 local_1a;
  
  local_58 = 0;
  local_50 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_28 = 0;
  local_30 = 0;
  plVar4 = (longlong *)FUN_00b220f0(&DAT_00b207e8,1);
  FUN_00b15a50(local_40,param_1);
  FUN_004153d0(&local_48,*PTR_DAT_020012a0,0);
  FUN_004156b0(&local_28,local_40[0],local_48);
  FUN_004153d0(&local_50,*PTR_DAT_020012a0,0);
  iVar2 = FUN_00417250(local_50,local_28,1);
  do {
    if (iVar2 < 1) {
      *param_2 = plVar4;
      local_59 = 1;
LAB_00b217be:
      FUN_00414590(&local_58,2);
      FUN_00414590(&local_48,2);
      FUN_00414590(&local_30,2);
      return local_59;
    }
    FUN_00415ad0(&local_30,local_28,1,iVar2 + -1);
    cVar1 = FUN_00b214b0(local_30,&local_1f);
    if (cVar1 == '\0') {
      local_59 = 0;
      (**(code **)(*plVar4 + -0x20))(plVar4,1);
      goto LAB_00b217be;
    }
    FUN_00b22230(plVar4,local_1f,local_1d,local_1b,local_1a);
    uVar3 = 0;
    if (local_28 != 0) {
      uVar3 = *(undefined4 *)(local_28 + -4);
    }
    FUN_00415ad0(&local_28,local_28,iVar2 + 1,uVar3);
    FUN_004153d0(&local_58,*PTR_DAT_020012a0,0);
    iVar2 = FUN_00417250(local_58,local_28,1);
  } while( true );
}

