#ifndef ADC_H
#define ADC_H
    typedef void (*adc_callback_t) (unsigned int adc_val);
    void adc_init();
    void adc_start();
    void adc_stop();
    void adc_reg_callback(adc_callback_t callback);
    void adc_irq();
#endif