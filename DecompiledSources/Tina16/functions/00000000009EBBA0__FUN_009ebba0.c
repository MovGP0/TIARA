/* Ghidra address: 009ebba0 */
/* Ghidra symbol: FUN_009ebba0 */


void FUN_009ebba0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  undefined8 local_38;
  longlong local_30;
  
  local_38 = 0;
  local_30 = 0;
  FUN_00657db0(param_1,param_2);
  FUN_0064dd90(param_1,&local_30);
  if (local_30 == 0) {
    pcVar4 = (code *)FUN_00411550(param_1,0xffb0);
    cVar1 = (*pcVar4)(param_1);
    if (cVar1 == '\0') {
      FUN_005ffb10(*(undefined8 *)(param_1 + 0x4f0),*(undefined8 *)(param_2 + 8));
      FUN_005ff880(*(undefined8 *)(param_1 + 0x4f0),*(undefined8 *)(param_1 + 0xb8));
      FUN_005fc860(*(undefined8 *)(*(longlong *)(param_1 + 0x4f0) + 0x70),0xff000011);
      iVar2 = FUN_005fdfd0(*(undefined8 *)(param_1 + 0x4f0),&LAB_009ebd44);
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x28))();
      iVar5 = 0;
      if (-1 < iVar3 + -1) {
        do {
          (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x18))
                    (*(longlong **)(param_1 + 0x4e8),&local_38,iVar5);
          (**(code **)(**(longlong **)(param_1 + 0x4f0) + 0x120))
                    (*(longlong **)(param_1 + 0x4f0),1,iVar5 * iVar2 + 1,local_38);
          iVar5 = iVar5 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
  }
  FUN_00414480(&local_38);
  FUN_00414480(&local_30);
  return;
}

