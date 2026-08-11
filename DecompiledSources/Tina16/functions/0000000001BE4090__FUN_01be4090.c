/* Ghidra address: 01be4090 */
/* Ghidra symbol: FUN_01be4090 */


void FUN_01be4090(longlong *param_1,undefined1 param_2)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [40];
  longlong local_20 [2];
  
  cVar1 = FUN_01be3df0(auStack_48,param_2,local_20);
  if (cVar1 != '\0') {
    plVar4 = (longlong *)FUN_01be0910(*(undefined8 *)(param_1[0xba] + 0x648));
    if (plVar4 == param_1) {
      cVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
      if ((cVar1 != '\0') && (sVar2 = FUN_007f9a50(), sVar2 == 4)) {
        if (local_20[0] == 0) {
          return;
        }
        lVar5 = FUN_01be2d90(param_1);
        if (lVar5 == 0) {
          return;
        }
        uVar6 = FUN_01be2d90(param_1);
        FUN_01be3f00(auStack_48,uVar6);
        FUN_01be3f00(auStack_48,local_20[0]);
        plVar4 = (longlong *)FUN_01be2d90(param_1);
        uVar3 = FUN_004b1870(local_20[0]);
        (**(code **)(*plVar4 + 0x28))(plVar4,uVar3);
        return;
      }
      FUN_01be3fd0(auStack_48,local_20);
      FUN_01be4230(param_1,*(undefined8 *)(local_20[0] + 0x80));
    }
    else {
      if ((*(longlong **)(*(longlong *)(local_20[0] + 0x80) + 0x78) == param_1) &&
         (lVar5 = FUN_01bfd980(local_20[0]), lVar5 != 0)) {
        lVar5 = FUN_01be0910(*(undefined8 *)(param_1[0xba] + 0x648));
        *(undefined1 *)(lVar5 + 0x592) = 0;
        *(undefined8 *)(param_1[0xba] + 0x580) = 0;
        FUN_01be3fd0(auStack_48,local_20);
        (**(code **)(**(longlong **)(local_20[0] + 0x80) + 600))
                  (*(longlong **)(local_20[0] + 0x80),1);
        return;
      }
      (**(code **)(**(longlong **)(local_20[0] + 0x80) + 0x268))(*(longlong **)(local_20[0] + 0x80))
      ;
    }
  }
  return;
}

