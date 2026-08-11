/* Ghidra address: 010e8e30 */
/* Ghidra symbol: FUN_010e8e30 */


void FUN_010e8e30(longlong param_1,char param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_38 [24];
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  if (param_2 != '\0') {
    iVar2 = (**(code **)(**(longlong **)(lVar1 + 0xd8) + 0x28))(*(longlong **)(lVar1 + 0xd8));
    if (0 < iVar2) {
      iVar2 = (**(code **)(**(longlong **)(lVar1 + 0xd8) + 0x28))(*(longlong **)(lVar1 + 0xd8));
      if (iVar2 < 3) {
        if (*(longlong *)(param_1 + 0x58) != 0) {
          lVar3 = FUN_00609e10(*(longlong *)(param_1 + 0x58));
          FUN_005fdab0(*(undefined8 *)(lVar3 + 0x80),0xffffff);
          plVar4 = (longlong *)FUN_00609e10(*(undefined8 *)(param_1 + 0x58));
          FUN_00498350(local_38,0,0,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c))
          ;
          (**(code **)(*plVar4 + 0xa8))(plVar4,local_38);
          (**(code **)(**(longlong **)(param_1 + 0x58) + 0x80))(*(longlong **)(param_1 + 0x58),0);
        }
        FUN_01acfa60(lVar1);
      }
    }
  }
  FUN_01aceb90(lVar1,1);
  return;
}

