/* Ghidra address: 010e9980 */
/* Ghidra symbol: FUN_010e9980 */


void FUN_010e9980(longlong param_1,char param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 local_48 [24];
  undefined8 local_30;
  
  if ((param_3 != 0) && (*(longlong *)(param_1 + 0x50) != 0)) {
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x68))(*(longlong **)(param_1 + 0x50));
    local_30 = 0;
    if (param_2 == '\x02') {
      uVar2 = FUN_01cc6f70(&PTR_FUN_01cb8fa8,1,param_3);
      FUN_00f16900(uVar2,param_3,0,L"Frequency [#Hz]",2,1,0,L"Gain ",1,0,0,&local_30,
                   *(undefined8 *)(param_1 + 0x50),1,0);
    }
    else if (param_2 == '\x04') {
      uVar2 = FUN_01cc6f70(&PTR_FUN_01cb9528,1,param_3);
      FUN_00f16900(uVar2,param_3,0,L"Frequency [#Hz]",2,1,0,L"Phase ",0,0,2,&local_30,
                   *(undefined8 *)(param_1 + 0x50),1,0);
    }
    else if (param_2 == '\x06') {
      uVar2 = FUN_01cc6f70(&PTR_FUN_01cb9c30,1,param_3);
      FUN_00f16900(uVar2,param_3,0,L"Real part ",0,0,2,L"Imag part ",0,0,2,&local_30,
                   *(undefined8 *)(param_1 + 0x50),1,0);
    }
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0xd8);
    (**(code **)(*plVar1 + 0x80))(plVar1,L"Analysis Result 1",local_30);
    FUN_010e8460(param_1,local_48,2);
    FUN_01acf9e0(*(undefined8 *)(param_1 + 0x50),local_48);
    FUN_01ad0490(*(undefined8 *)(param_1 + 0x50));
    FUN_01acfa60(*(undefined8 *)(param_1 + 0x50));
    FUN_01aceb90(*(undefined8 *)(param_1 + 0x50),1);
  }
  return;
}

