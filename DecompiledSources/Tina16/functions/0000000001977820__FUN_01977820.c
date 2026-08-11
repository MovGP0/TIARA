/* Ghidra address: 01977820 */
/* Ghidra symbol: FUN_01977820 */


void FUN_01977820(longlong param_1,char param_2,int param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  int local_38 [2];
  undefined1 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_60 = 0;
  local_68 = 0;
  local_50 = 0;
  local_58 = 0;
  local_40 = 0;
  local_48 = 0;
  local_20[0] = 0;
  local_28 = 0;
  if (*(longlong *)(param_1 + 0x418) != 0) {
    (**(code **)(param_1 + 0x418))(*(undefined8 *)(param_1 + 0x420),param_1,param_2,param_3);
  }
  if (*(char *)(*(longlong *)(param_1 + 0x1a8) + 0x20) == '\0') {
    if (((*(char *)(param_1 + 0x1e9) != '\0') || (param_2 != '\0')) &&
       (*(char *)(param_1 + 0x270) != '\0')) {
      if (param_2 == '\0') {
        if (*(char *)(*(longlong *)(param_1 + 0x1a0) + 0x18) == '\0') {
          uVar2 = FUN_0180bfb0();
          FUN_01809b60(uVar2,&local_28,L"prRunningFirst");
          local_30 = 0;
          local_38[0] = param_3;
          FUN_00442f70(local_20,local_28,local_38,0);
          FUN_0181cc80(*(undefined8 *)(param_1 + 0x230),local_20[0]);
        }
        else {
          uVar2 = FUN_0180bfb0();
          FUN_01809b60(uVar2,&local_48,L"prRunning");
          local_30 = 0;
          local_38[0] = param_3;
          FUN_00442f70(&local_40,local_48,local_38,0);
          FUN_0181cc80(*(undefined8 *)(param_1 + 0x230),local_40);
        }
      }
      else if (param_2 == '\x01') {
        uVar2 = FUN_0180bfb0();
        FUN_01809b60(uVar2,&local_68,L"prExporting");
        local_30 = 0;
        local_38[0] = param_3;
        FUN_00442f70(&local_60,local_68,local_38,0);
        FUN_0181cc80(*(undefined8 *)(param_1 + 0x230),local_60);
      }
      else if (param_2 == '\x02') {
        uVar2 = FUN_0180bfb0();
        FUN_01809b60(uVar2,&local_58,L"prPrinting");
        local_30 = 0;
        local_38[0] = param_3;
        FUN_00442f70(&local_50,local_58,local_38,0);
        FUN_0181cc80(*(undefined8 *)(param_1 + 0x230),local_50);
      }
      if (*(char *)(*(longlong *)(param_1 + 0x230) + 0x700) != '\0') {
        FUN_01977630(param_1,1);
      }
    }
    plVar1 = *(longlong **)(param_1 + 0x210);
    if ((plVar1 != (longlong *)0x0) && (param_2 == '\0')) {
      (**(code **)(*plVar1 + 0x2d0))(plVar1,param_1,0,param_3 + -1);
    }
    if (*(char *)(*(longlong *)(param_1 + 0x1a8) + 0x20) == '\0') {
      FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
    }
  }
  FUN_00414560(&local_68,6);
  FUN_00414560(&local_28,2);
  return;
}

