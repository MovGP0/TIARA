/* Ghidra address: 01a68330 */
/* Ghidra symbol: FUN_01a68330 */


void FUN_01a68330(longlong param_1)

{
  longlong *plVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  *(undefined1 *)(param_1 + 0x728) = 0;
  *(undefined1 *)(param_1 + 0x729) = 0;
  plVar1 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  *(longlong **)(param_1 + 0x748) = plVar1;
  (**(code **)(*plVar1 + 0x78))(plVar1,L"butterworth;N,3,i;Wn,0.03,f");
  (**(code **)(**(longlong **)(param_1 + 0x748) + 0x78))
            (*(longlong **)(param_1 + 0x748),L"uniform_filter1d;N,100,i");
  *(undefined1 *)(param_1 + 0x729) = 1;
  *(undefined4 *)(param_1 + 0x72c) = 0;
  *(undefined8 *)(param_1 + 0x768) = 0;
  *(undefined8 *)(param_1 + 0x770) = 0;
  plVar1 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  *(longlong **)(param_1 + 0x740) = plVar1;
  (**(code **)(*plVar1 + 0x78))
            (plVar1,L"https://docs.scipy.org/doc/scipy/reference/generated/scipy.signal.butter.html"
            );
  (**(code **)(**(longlong **)(param_1 + 0x740) + 0x78))
            (*(longlong **)(param_1 + 0x740),
             L"https://docs.scipy.org/doc/scipy/reference/generated/scipy.ndimage.uniform_filter.html"
            );
  plVar1 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  *(longlong **)(param_1 + 0x738) = plVar1;
  (**(code **)(*plVar1 + 0x78))(plVar1,L"Filter butterworth");
  (**(code **)(**(longlong **)(param_1 + 0x738) + 0x78))
            (*(longlong **)(param_1 + 0x738),L"Filter uniform");
  FUN_0043f750(&local_18,DAT_01fca730);
  FUN_00416ba0(&local_10,L"NewCurve",local_18);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x708),local_10);
  DAT_01fca730 = DAT_01fca730 + 1;
  FUN_00414560(&local_18,2);
  return;
}

