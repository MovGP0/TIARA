/* Ghidra address: 0065afd0 */
/* Ghidra symbol: FUN_0065afd0 */


void FUN_0065afd0(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined4 local_38;
  undefined4 local_34;
  
  cVar2 = FUN_0065be20(param_1);
  if (cVar2 != '\0') {
    uVar4 = FUN_0065b870(param_1);
    iVar3 = thunk_FUN_0419e3da(uVar4);
    if (iVar3 != 0) {
      bVar1 = true;
      goto LAB_0065b010;
    }
  }
  bVar1 = false;
LAB_0065b010:
  if (bVar1) {
    uVar4 = FUN_0065b870(param_1);
    thunk_FUN_041cc6e2(uVar4,0,0,0,0,0,0x97);
  }
  FUN_0064d000(param_1,&local_38);
  pcVar5 = (code *)FUN_00411550(param_1,0xffec);
  (*pcVar5)(param_1,param_2,param_3);
  (**(code **)(*param_1 + 400))
            (param_1,local_38,local_34,(int)param_1[0x13],*(undefined4 *)((longlong)param_1 + 0x9c))
  ;
  if (bVar1) {
    uVar4 = FUN_0065b870(param_1);
    thunk_FUN_041cc6e2(uVar4,0,0,0,0,0,0x57);
  }
  return;
}

