/* Ghidra address: 007de490 */
/* Ghidra symbol: FUN_007de490 */


void FUN_007de490(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,uint param_6)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 local_48 [24];
  short *local_30 [2];
  
  local_30[0] = (short *)0x0;
  lVar2 = FUN_007e3880(param_1);
  if (lVar2 != 0) {
    cVar1 = FUN_007e6b10(lVar2);
    if (cVar1 != '\0') {
      if ((param_6 & 0x100) == 0) {
        if ((param_6 & 0x1000) != 0) {
          param_6 = param_6 & 0xffffefff | 0x100;
        }
      }
      else {
        param_6 = param_6 & 0xfffffeff | 0x1000;
      }
      param_6 = param_6 | 0x2000;
    }
  }
  FUN_00414b50(local_30,param_3);
  if (((param_6 & 2) != 0) &&
     ((local_30[0] == (short *)0x0 || ((*local_30[0] == 0x26 && (local_30[0][1] == 0)))))) {
    FUN_00416ad0(local_30,&DAT_007de67c);
  }
  FUN_005fdcb0(*(undefined8 *)(param_2 + 0x80),1);
  if (*(char *)(param_1 + 0x82) != '\0') {
    FUN_005fce70(*(longlong *)(param_2 + 0x70),
                 *(byte *)(*(longlong *)(*(longlong *)(param_2 + 0x70) + 0x18) + 0x31) | 1);
  }
  uVar3 = FUN_007810f0();
  uVar4 = FUN_005ffa40(param_2);
  plVar5 = (longlong *)FUN_007810f0();
  (**(code **)(*plVar5 + 0x158))(plVar5,local_48,(&DAT_01e131cc)[*(byte *)(param_1 + 0x81)]);
  FUN_00778f70(uVar3,uVar4,local_48,local_30[0],param_4,param_6,0x1fffffff,0);
  FUN_00414480(local_30);
  return;
}

