/* Ghidra address: 01bfaa70 */
/* Ghidra symbol: FUN_01bfaa70 */


undefined8 FUN_01bfaa70(longlong param_1,undefined2 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  
  uVar5 = (undefined1)((ushort)param_2 >> 8);
  if (*(longlong *)(param_1 + 0x50) != 0) goto LAB_01bfab3c;
  lVar1 = FUN_01bfab50(param_1);
  if (lVar1 == 0) {
LAB_01bfab08:
    uVar2 = FUN_01bfab50(param_1);
    uVar2 = FUN_01bf9620(uVar2);
    uVar2 = FUN_01bfb780(&PTR_FUN_01bef088,CONCAT11(uVar5,1),uVar2,&PTR_FUN_01bf1690);
    *(undefined8 *)(param_1 + 0x50) = uVar2;
  }
  else {
    uVar2 = FUN_01bfab50(param_1);
    lVar1 = FUN_01bf9620(uVar2);
    if (lVar1 == 0) goto LAB_01bfab08;
    uVar2 = FUN_01bfab50(param_1);
    uVar2 = FUN_01bf9620(uVar2);
    pcVar3 = (code *)FUN_00411550(uVar2,0xffed);
    lVar1 = (*pcVar3)(uVar2);
    uVar4 = FUN_01bfab50(param_1);
    uVar4 = FUN_01bf9620(uVar4);
    uVar5 = 0xff;
    pcVar3 = (code *)FUN_00411550(uVar2,0xffec);
    uVar2 = (*pcVar3)(uVar2);
    uVar2 = (**(code **)(lVar1 + 0x50))(lVar1,CONCAT11(uVar5,1),uVar4,uVar2);
    *(undefined8 *)(param_1 + 0x50) = uVar2;
  }
  *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x38) = param_1;
LAB_01bfab3c:
  return *(undefined8 *)(param_1 + 0x50);
}

