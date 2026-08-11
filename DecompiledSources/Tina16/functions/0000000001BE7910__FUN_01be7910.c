/* Ghidra address: 01be7910 */
/* Ghidra symbol: FUN_01be7910 */


longlong FUN_01be7910(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  
  cVar1 = (**(code **)(*param_2 + 0x238))(param_2);
  if (cVar1 == '\0') {
    uVar3 = (**(code **)(*param_1 + 0x458))(param_1);
    cVar1 = FUN_004113d0(param_2,uVar3);
    if (cVar1 != '\0') {
      plVar4 = (longlong *)FUN_01be7860(auStack_48,param_2[100]);
      if (plVar4 == (longlong *)0x0) {
        lVar5 = FUN_01c07120(*(undefined8 *)(param_1[0xba] + 0x5b0));
        uVar3 = FUN_01bfaa70(*(undefined8 *)(lVar5 + 0x498));
        uVar2 = FUN_004b1870(param_2[100]);
        uVar3 = FUN_004b23b0(uVar3,uVar2);
        uVar6 = FUN_01bfd980(param_2[100]);
        FUN_01bfde30(uVar3,uVar6);
      }
      else {
        (**(code **)(*plVar4 + 0x60))(plVar4,(char)plVar4[0xb] == '\0');
        if ((char)plVar4[0xb] == '\0') {
          FUN_0064dbe0(plVar4[0x10],0);
        }
      }
      FUN_00654320(param_1[0xd4],0);
      lVar5 = param_1[0xd4];
      local_28 = *(undefined4 *)(lVar5 + 0x9c);
      (**(code **)(*(longlong *)param_1[0xd4] + 400))
                ((longlong *)param_1[0xd4],*(undefined4 *)(lVar5 + 0x90),
                 *(undefined4 *)(lVar5 + 0x94),*(undefined4 *)(lVar5 + 0x98));
      return 0;
    }
  }
  if (param_2[100] == param_1[0xd3]) {
    (**(code **)(*param_1 + 0x408))(param_1);
    lVar5 = param_2[100];
    uVar3 = FUN_0065b870(param_1[0xd4]);
    thunk_FUN_0413e052(uVar3,0xb409,0,0);
  }
  else {
    lVar5 = FUN_01be2330(param_1,param_2);
  }
  return lVar5;
}

