/* Ghidra address: 019d55e0 */
/* Ghidra symbol: FUN_019d55e0 */


void FUN_019d55e0(longlong param_1,undefined4 param_2)

{
  int iVar1;
  
  (**(code **)(**(longlong **)(param_1 + 0x758) + 0x128))(*(longlong **)(param_1 + 0x758),param_2);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x758),param_2);
  (**(code **)(**(longlong **)(param_1 + 0x768) + 0x128))(*(longlong **)(param_1 + 0x768),param_2);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x768),param_2);
  (**(code **)(**(longlong **)(param_1 + 0x760) + 0x128))(*(longlong **)(param_1 + 0x760),param_2);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x760),param_2);
  (**(code **)(**(longlong **)(param_1 + 0x770) + 0x128))(*(longlong **)(param_1 + 0x770),param_2);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x770),param_2);
  (**(code **)(**(longlong **)(param_1 + 0x7e0) + 0x128))(*(longlong **)(param_1 + 0x7e0),param_2);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7e0),param_2);
  (**(code **)(**(longlong **)(param_1 + 0x7e8) + 0x128))(*(longlong **)(param_1 + 0x7e8),param_2);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7e8),param_2);
  (**(code **)(**(longlong **)(param_1 + 0x778) + 0x128))(*(longlong **)(param_1 + 0x778),param_2);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x778),param_2);
  (**(code **)(**(longlong **)(param_1 + 0x780) + 0x128))(*(longlong **)(param_1 + 0x780),param_2);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x780),param_2);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x260))(*(longlong **)(param_1 + 0x720));
  if (iVar1 == 0) {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6b0),L"Passband Gain (dB): ");
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6c0),L"Stopband Gain (dB): ");
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6d0),L"Passband Frequency (Hz): ");
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6e0),L"Stopband Frequency (Hz): ");
  }
  else {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x260))(*(longlong **)(param_1 + 0x720))
    ;
    if (iVar1 == 1) {
      FUN_0064de00(*(undefined8 *)(param_1 + 0x6b0),L"Stopband Gain (dB): ");
      FUN_0064de00(*(undefined8 *)(param_1 + 0x6c0),L"Passband Gain (dB): ");
      FUN_0064de00(*(undefined8 *)(param_1 + 0x6d0),L"Stopband Frequency (Hz): ");
      FUN_0064de00(*(undefined8 *)(param_1 + 0x6e0),L"Passband Frequency (Hz): ");
    }
    else {
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x260))
                        (*(longlong **)(param_1 + 0x720));
      if (iVar1 == 2) {
        FUN_0064de00(*(undefined8 *)(param_1 + 0x6b0),L"Stopband Gain (dB): ");
        FUN_0064de00(*(undefined8 *)(param_1 + 0x6c0),L"Passband Gain (dB): ");
        FUN_0064de00(*(undefined8 *)(param_1 + 0x6d0),L"Stopband Frequency #1 (Hz): ");
        FUN_0064de00(*(undefined8 *)(param_1 + 0x6e0),L"Passband Frequency #1 (Hz): ");
        FUN_0064de00(*(undefined8 *)(param_1 + 0x758),L"Passband Frequency #2 (Hz): ");
        FUN_0064de00(*(undefined8 *)(param_1 + 0x768),L"Stopband Frequency #2 (Hz): ");
      }
      else {
        iVar1 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x260))
                          (*(longlong **)(param_1 + 0x720));
        if (iVar1 == 3) {
          FUN_0064de00(*(undefined8 *)(param_1 + 0x6b0),L"Passband Gain (dB): ");
          FUN_0064de00(*(undefined8 *)(param_1 + 0x6c0),L"Stopband Gain (dB): ");
          FUN_0064de00(*(undefined8 *)(param_1 + 0x6d0),L"Passband Frequency #1 (Hz): ");
          FUN_0064de00(*(undefined8 *)(param_1 + 0x6e0),L"Stopband Frequency #1 (Hz): ");
          FUN_0064de00(*(undefined8 *)(param_1 + 0x758),L"Stopband Frequency #2 (Hz): ");
          FUN_0064de00(*(undefined8 *)(param_1 + 0x768),L"Passband Frequency #2 (Hz): ");
        }
      }
    }
  }
  return;
}

