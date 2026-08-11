/* Ghidra address: 01318500 */
/* Ghidra symbol: FUN_01318500 */


void FUN_01318500(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  longlong *local_310;
  longlong *local_308;
  longlong *local_300;
  longlong *local_2f8;
  undefined8 local_2f0;
  longlong local_2e8;
  undefined8 local_2e0 [2];
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined1 local_2c0 [24];
  undefined8 local_2a8;
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30 [2];
  
  local_318 = 0;
  local_320 = 0;
  local_328 = 0;
  local_308 = (longlong *)0x0;
  local_310 = (longlong *)0x0;
  local_2f8 = (longlong *)0x0;
  local_300 = (longlong *)0x0;
  local_2f0 = 0;
  local_2e8 = 0;
  local_2e0[0] = 0;
  local_30[0] = (longlong *)0x0;
  local_38 = 0;
  local_40 = (longlong *)0x0;
  local_2c8 = 0;
  local_2d0 = 0;
  FUN_00417580(local_2c0,&DAT_00432b90);
  cVar1 = FUN_00440b00(*(undefined8 *)(param_1 + 0x58),1);
  if (cVar1 != '\0') {
    FUN_00416cd0(local_2e0,3,*(undefined8 *)(param_1 + 0x58),L"\\report_",L"_description.xml");
    iVar2 = FUN_00441230(local_2e0[0],0x20,local_2c0);
    if (iVar2 == 0) {
      FUN_00416cd0(&local_2c8,3,*(undefined8 *)(param_1 + 0x58),&DAT_013189b4,local_2a8);
    }
    FUN_004412c0(local_2c0);
    FUN_00bac3d0(local_30);
    cVar1 = (**(code **)(*local_30[0] + 0x170))(local_30[0],local_2c8);
    if ((cVar1 != '\0') &&
       ((**(code **)(*local_30[0] + 0x100))(local_30[0],&local_2e8), local_2e8 != 0)) {
      (**(code **)(**(longlong **)(param_1 + 8) + 0x148))
                (*(longlong **)(param_1 + 8),&local_38,L"description");
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x98))
                (*(longlong **)(param_1 + 0x10),&local_2f0,local_38);
      FUN_0041b800(&local_40);
      (**(code **)(*local_30[0] + 0x100))(local_30[0],&local_300);
      (**(code **)(*local_300 + 0x20))(local_300,&local_2f8);
      iVar2 = (**(code **)(*local_2f8 + 0x18))();
      iVar3 = 0;
      if (-1 < iVar2 + -1) {
        do {
          (**(code **)(*local_30[0] + 0x100))(local_30[0],&local_310);
          (**(code **)(*local_310 + 0x20))(local_310,&local_308);
          (**(code **)(*local_308 + 0x20))(local_308,&local_40,iVar3);
          (**(code **)(*local_40 + 0x40))(local_40,&local_320);
          (**(code **)(*local_40 + 0xb8))(local_40,&local_328);
          FUN_00c7c750(&local_318,local_38,local_320,local_328);
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
  }
  FUN_00414560(&local_328,2);
  FUN_0041b800(&local_318);
  FUN_0041b800(&local_310);
  FUN_0041b800(&local_308);
  FUN_0041b800(&local_300);
  FUN_0041b800(&local_2f8);
  FUN_0041b800(&local_2f0);
  FUN_0041b800(&local_2e8);
  FUN_00414480(local_2e0);
  FUN_00414560(&local_2d0,2);
  FUN_00417740(local_2c0,&DAT_00432b90);
  FUN_0041b800(&local_40);
  FUN_0041b800(&local_38);
  FUN_0041b800(local_30);
  return;
}

