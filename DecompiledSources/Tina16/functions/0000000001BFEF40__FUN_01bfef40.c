/* Ghidra address: 01bfef40 */
/* Ghidra symbol: FUN_01bfef40 */


void FUN_01bfef40(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                 char param_5)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [16];
  undefined8 local_30;
  
  FUN_00648ee0(param_1,param_2,param_3,param_4,param_5);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x80);
  if ((lVar1 != 0) && (param_2 != lVar1)) {
    local_48 = param_3;
    local_44 = param_4;
    local_30 = FUN_0064d3a0(lVar1,&local_48);
    if ((*(char *)(param_1 + 0x30) != '\0') && (param_5 == '\0')) {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 0x80);
      (**(code **)(*plVar2 + 0xe0))(plVar2,local_40);
      cVar4 = FUN_00423210(local_40,&local_30);
      if (cVar4 == '\0') {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 200);
        cVar4 = FUN_004113d0(lVar1,&LAB_01bf0c80);
        if ((cVar4 != '\0') && (*(longlong *)(lVar1 + 0x30) != 0)) {
          uVar3 = *(undefined8 *)(lVar1 + 0x30);
          *(undefined8 *)(lVar1 + 0x30) = 0;
          FUN_00410f20(uVar3);
        }
        FUN_00410f20(*(undefined8 *)(param_1 + 0x58));
      }
    }
    FUN_01bf6300(0);
  }
  return;
}

