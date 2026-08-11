/* Ghidra address: 006e1e60 */
/* Ghidra symbol: FUN_006e1e60 */


bool FUN_006e1e60(longlong param_1,code *param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  undefined8 local_50;
  code *local_48;
  undefined8 local_40;
  
  bVar5 = false;
  cVar1 = FUN_0065be20(param_1);
  if (cVar1 != '\0') {
    local_48 = param_2;
    if (param_2 == (code *)0x0) {
      local_48 = FUN_006dc460;
    }
    local_50 = 0xffffffffffff0000;
    local_40 = param_3;
    uVar3 = FUN_0065b870(param_1);
    iVar2 = thunk_FUN_041b2403(uVar3,0x1115,0,&local_50);
    bVar5 = iVar2 != 0;
    if (param_4 != '\0') {
      for (lVar4 = FUN_006df4b0(*(undefined8 *)(param_1 + 0x550)); lVar4 != 0;
          lVar4 = FUN_006dd3e0(lVar4)) {
        cVar1 = FUN_006dd2b0(lVar4);
        if (cVar1 != '\0') {
          FUN_006de070(lVar4,param_2,param_3,1);
        }
      }
    }
    FUN_006dfe80(*(undefined8 *)(param_1 + 0x550));
  }
  return bVar5;
}

